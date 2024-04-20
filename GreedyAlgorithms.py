
#make  dict for stations:
stations = {
    "kone": {"id", "nv", "ut"},
    "ktwo": {"wa", "id", "mt"},
    "kthree": {"or", "nv", "ca"},
    "kfour": {"nv", "ut"},
    "kfive": {"ca", "az"}
}

# make a list of the states you want to cover:
states_needed = set(["mt", "wa", "or", "id", "nv", "ut", "ca", "az"])

# to hold the final set of stations 
final_stations = set()

while states_needed:
    best_station = None
    states_covered = set()
    
    for station, states in stations.items():
        # To know which intersection 
        covered = states_needed & states
        if len(covered) > len(states_covered):
            best_station = station
            states_covered = covered
    # remove station from dict
    states_needed -= states_covered
    #add station to final set 
    final_stations.add(best_station)
#print result
print("Selected stations:", final_stations)
