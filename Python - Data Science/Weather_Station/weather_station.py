from requests import get
import json
from mpl_toolkits.basemap import Basemap
import matplotlib.pyplot as plt

url = 'https://apex.oracle.com/pls/apex/raspberrypi/weatherstation/getalllastmeasurement'
station_data = get(url).json()

lons = [data['weather_stn_long'] for data in station_data['items']]
lats = [data['weather_stn_lat'] for data in station_data['items']]
temps = [data['ground_temp'] for data in station_data['items']]

for i,temp in enumerate(temps):
	temps[i] = (temp * (9/5)) + 32

for stuff in temps:
	print("\nYeet: {}".format(stuff))

cc_lat = 30
cc_lon = -90

my_map = Basemap(projection='merc', lat_0 = cc_lat, lon_0 = cc_lon,
                 resolution = 'h' , area_thresh = 1,
                 llcrnrlon=cc_lon-29, llcrnrlat=cc_lat-8,
                 urcrnrlon=cc_lon+26, urcrnrlat=cc_lat+19)

my_map.bluemarble()

for lon, lat, temp in zip(lons, lats, temps):
	if lon >= cc_lon-29 and lon <= cc_lon+26 and lat >= cc_lat-8 and lat <= cc_lat+19:
		x,y = my_map(lon, lat)
		my_map.plot(x, y, 'o', markersize=10, color=(0,0,1))
		plt.text(x, y, temp, color = 'w', ha='right',va='bottom')

plt.title('Weather Stuff')
plt.show()