# Define constants and input data
gas_flow_rate = 3000  # m3/min
so2_removal_target = 0.96  # Target removal efficiency
avg_mw_gas = 29.4  #avg mw
avg_absorbtion_area_wrt_Packed_volume = 44.9
rate_of_solvent = 3280 #kg/hr-m^2
density = 1122 #kg/m^3
# Packing properties (replace with actual values)
# packing_height = [1, 1.5, 2]  # List of possible packing heights (m)
# active_area = 449  # m2/m3

G = gas_flow_rate
mass_transfer_coeff = lambda G: 0.003 * G**0.8  # Function for mass transfer coefficient (kg/hr.m2)

# Function to calculate pressure drop (replace with actual equation)
def pressure_drop(packing_height):
    # Replace with an equation based on your pressure drop data/model
    return 0.1 * packing_height  # Placeholder for pressure drop calculation (kPa)

# Function to calculate SO2 removal efficiency (replace with actual model)
def so2_removal_efficiency(packing_height):
    # Replace with a model based on your SO2 removal data or correlations
    return 0.8 + 0.1 * packing_height  # Placeholder for SO2 removal calculation (%)

# Loop through packing heights and calculate results
results = []
for height in packing_height:
    G = gas_flow_rate * 60 / (active_area * height)  # Gas mass velocity (kg/hr.m2)
    k_L = mass_transfer_coeff(G)  # Mass transfer coefficient (kg/hr.m2)
    # Replace with actual calculation for SO2 removal efficiency
    efficiency = so2_removal_efficiency(height)
    delta_p = pressure_drop(height)  # Pressure drop (kPa)
    results.append({"height": height, "efficiency": efficiency, "pressure_drop": delta_p})

# Analyze results and choose optimal design point
optimal_design = None
for result in results:
    if result["efficiency"] >= so2_removal_target and result["pressure_drop"] < 5:  # Adjust pressure drop limit
        optimal_design = result
        break

if optimal_design:
    print("Optimal Design:")
    print(f"Packing Height: {optimal_design['height']} m")
    print(f"SO2 Removal Efficiency: {optimal_design['efficiency']:.2f} %")
    print(f"Pressure Drop: {optimal_design['pressure_drop']:.2f} kPa")
else:
    print("No design found that meets both efficiency and pressure drop targets.")

# Additional calculations (optional)
#  - Power consumption for solvent pumping based on pressure drop
#  - Blowing power calculation (consider including blower efficiency)
