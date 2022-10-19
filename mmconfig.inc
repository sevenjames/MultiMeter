[VARIABLES]
; structure dimensions
Border_Width=4
Skin_Width=128
Tile_Height=24
Tile_Width=(#Skin_Width#-(2*#Border_Width#))
Skin_Height=((#Tile_Height#*#Tile_Count#)+(#Border_Width#*(#Tile_Count#+1)))

; max bandwidth in megabits
; this is used to set the scale of the net histogram
NetIn_MaxMegaBits = 100
NetOut_MaxMegaBits = 10
; convert that to bits
NetIn_MaxBits = (#NetIn_MaxMegaBits# * 1048576)
NetOut_MaxBits = (#NetOut_MaxMegaBits# * 1048576)

; drives
Drive1=C:
Drive2=D:
Drive3=E:
Drive4=F:
Drive5=G:
Drive6=H:
Drive7=I:
Drive8=J:
