[VARIABLES]
; color definitions
black=0,0,0
sm_yellow=248,176,0
sm_gray_1=96,96,96
sm_gray_2=184,184,184
sm_gray_3=248,248,248
sm_purple_1=18,26,63
sm_purple_2=40,56,136
sm_purple_3=216,56,144
sm_green_1=40,80,0
sm_green_2=72,168,56
sm_green_3=136,232,16
sm_brown_1=40,32,40
sm_brown_2=112,72,80
sm_brown_3=152,104,120

; color assignments
Color_SkinBackground=#sm_purple_2#
Color_HeaderBackground=#sm_yellow#
Color_HeaderText=#black#
Color_HeaderTextEffect=#sm_gray_3#
Color_TileBackground=#black#
Color_TileText=#sm_gray_3#
Color_TileTextEffect=#sm_purple_2#
Color_Hst_Data=#sm_purple_3#
Color_Bar_Data=#sm_purple_3#

[STYLE_TILE]
SolidColor=#Color_TileBackground#
X=#Border_Width#
W=#Tile_Width#
H=#Tile_Height#

[STYLE_BAR]
BarColor=#Color_Bar_Data#
BarOrientation=Horizontal
Flip=0

[STYLE_HIST]
PrimaryColor=#Color_Hst_Data#
AutoScale=0

[STYLE_TEXT_LEFT]
StringAlign=LeftTop
Padding=4,0,-4,0
X=#Border_Width#
W=#Tile_Width#
H=#Tile_Height#

[STYLE_TEXT]
FontFace=Consolas
StringStyle=Bold
FontSize=10
AntiAlias=1
FontColor=#Color_TileText#
StringEffect=Border
FontEffectColor=#Color_TileTextEffect#
ClipString=0
