-- Gui to Lua
-- Version: 3.2

-- Instances:

local ScreenGui = Instance.new("ScreenGui")
local maingui = Instance.new("Frame")
local close = Instance.new("TextButton")
local line = Instance.new("TextLabel")
local Credits = Instance.new("TextLabel")
local Credits_2 = Instance.new("TextLabel")
local ScrollingFrame = Instance.new("ScrollingFrame")
local VOID = Instance.new("TextButton")
local builder = Instance.new("TextButton")
local builder_2 = Instance.new("TextButton")
local builder_3 = Instance.new("TextButton")
local builder_4 = Instance.new("TextButton")
local builder_5 = Instance.new("TextButton")
local sanshub = Instance.new("TextButton")
local sanshub_2 = Instance.new("TextButton")
local close_2 = Instance.new("TextButton")
local TextLabel = Instance.new("TextLabel")
local VOID_2 = Instance.new("TextButton")
local opengui = Instance.new("Frame")
local open = Instance.new("TextButton")
local Page2 = Instance.new("Frame")
local main = Instance.new("TextButton")
local line_2 = Instance.new("TextLabel")
local ScrollingFrame_2 = Instance.new("ScrollingFrame")
local TextButton = Instance.new("TextButton")
local TextButton_2 = Instance.new("TextButton")
local TextButton_3 = Instance.new("TextButton")
local TextButton_4 = Instance.new("TextButton")
local TextButton_5 = Instance.new("TextButton")
local Set = Instance.new("TextButton")
local UImadeby = Instance.new("TextLabel")
local textcredit = Instance.new("TextLabel")
local cum = Instance.new("TextLabel")
local Cyber = Instance.new("TextLabel")
local Hub = Instance.new("TextLabel")
local Settings = Instance.new("Frame")
local main_2 = Instance.new("TextButton")
local line_3 = Instance.new("TextLabel")
local ScrollingFrame_3 = Instance.new("ScrollingFrame")
local TextButton_6 = Instance.new("TextButton")
local TextButton_7 = Instance.new("TextButton")
local TextButton_8 = Instance.new("TextButton")
local TextButton_9 = Instance.new("TextButton")
local TextButton_10 = Instance.new("TextButton")
local Set_2 = Instance.new("TextButton")
local UImadeby_2 = Instance.new("TextLabel")
local Credits_3 = Instance.new("TextLabel")
local textcredit_2 = Instance.new("TextLabel")
local cum_2 = Instance.new("TextLabel")
local Cyber_2 = Instance.new("TextLabel")
local Hub_2 = Instance.new("TextLabel")
local cum_3 = Instance.new("TextLabel")
local ForNiBs = Instance.new("ScreenGui")
local Frame = Instance.new("Frame")
local Panel = Instance.new("TextLabel")
local Input = Instance.new("TextBox")
local CheckSystem = Instance.new("TextButton")
local CoolThing = Instance.new("TextLabel")

--Properties:

ScreenGui.Parent = game.CoreGui
ScreenGui.ZIndexBehavior = Enum.ZIndexBehavior.Sibling

maingui.Name = "maingui"
maingui.Parent = ScreenGui
maingui.BackgroundColor3 = Color3.fromRGB(26, 29, 28)
maingui.BorderColor3 = Color3.fromRGB(241, 255, 249)
maingui.Position = UDim2.new(0.00995050557, 0, 0.277391493, 0)
maingui.Size = UDim2.new(0, 560, 0, 343)
maingui.Visible = false
maingui.Active = true
maingui.Draggable = true

close.Name = "close"
close.Parent = maingui
close.BackgroundColor3 = Color3.fromRGB(26, 29, 28)
close.BorderSizePixel = 0
close.Position = UDim2.new(0.0580551773, 0, 0.189415038, 0)
close.Size = UDim2.new(0, 104, 0, 33)
close.Font = Enum.Font.SourceSans
close.Text = "Next Page"
close.TextColor3 = Color3.fromRGB(251, 255, 242)
close.TextScaled = true
close.TextSize = 14.000
close.TextWrapped = true
close.MouseButton1Down:connect (function()
	maingui.Visible = false
	Page2.Visible = true
end)

line.Name = "line"
line.Parent = maingui
line.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
line.BorderColor3 = Color3.fromRGB(241, 255, 238)
line.Position = UDim2.new(0, 0, 0.893110931, 0)
line.Size = UDim2.new(0, 560, 0, 0)
line.Font = Enum.Font.SourceSans
line.Text = "     "
line.TextColor3 = Color3.fromRGB(234, 234, 234)
line.TextSize = 14.000

Credits.Name = "Credits"
Credits.Parent = maingui
Credits.BackgroundColor3 = Color3.fromRGB(26, 29, 28)
Credits.BorderColor3 = Color3.fromRGB(233, 255, 237)
Credits.BorderSizePixel = 0
Credits.Position = UDim2.new(0.351958483, 0, 0.0340515375, 0)
Credits.Size = UDim2.new(0, 85, 0, 50)
Credits.Font = Enum.Font.SourceSans
Credits.Text = "Cyber"
Credits.TextColor3 = Color3.fromRGB(255, 255, 255)
Credits.TextScaled = true
Credits.TextSize = 14.000
Credits.TextWrapped = true

Credits_2.Name = "Credits"
Credits_2.Parent = Credits
Credits_2.BackgroundColor3 = Color3.fromRGB(26, 29, 28)
Credits_2.BorderColor3 = Color3.fromRGB(233, 255, 237)
Credits_2.BorderSizePixel = 0
Credits_2.Position = UDim2.new(1, 0, -0.0124792485, 0)
Credits_2.Size = UDim2.new(0, 71, 0, 50)
Credits_2.Font = Enum.Font.SourceSans
Credits_2.Text = "Hub"
Credits_2.TextColor3 = Color3.fromRGB(252, 33, 44)
Credits_2.TextScaled = true
Credits_2.TextSize = 14.000
Credits_2.TextWrapped = true

ScrollingFrame.Parent = maingui
ScrollingFrame.Active = true
ScrollingFrame.BackgroundColor3 = Color3.fromRGB(24, 24, 24)
ScrollingFrame.BorderColor3 = Color3.fromRGB(37, 37, 35)
ScrollingFrame.BorderSizePixel = 2
ScrollingFrame.Position = UDim2.new(0.0312694572, 0, 0.402332395, 0)
ScrollingFrame.Size = UDim2.new(0, 212, 0, 150)

VOID.Name = "VOID"
VOID.Parent = ScrollingFrame
VOID.BackgroundColor3 = Color3.fromRGB(24, 24, 24)
VOID.BorderColor3 = Color3.fromRGB(37, 37, 35)
VOID.BorderSizePixel = 2
VOID.Position = UDim2.new(0.0565052666, 0, 0.0204081684, 0)
VOID.Size = UDim2.new(0, 175, 0, 28)
VOID.Font = Enum.Font.SourceSans
VOID.Text = "Void V2"
VOID.TextColor3 = Color3.fromRGB(221, 221, 221)
VOID.TextScaled = true
VOID.TextSize = 14.000
VOID.TextWrapped = true
VOID.MouseButton1Down:connect (function()
loadstring(game:HttpGet('https://raw.githubusercontent.com/rozm12/stop-/master/Void%20V2'))()
end)

builder.Name = "builder"
builder.Parent = ScrollingFrame
builder.BackgroundColor3 = Color3.fromRGB(24, 24, 24)
builder.BorderColor3 = Color3.fromRGB(37, 37, 35)
builder.BorderSizePixel = 2
builder.Position = UDim2.new(0.0542141832, 0, 0.0794382542, 0)
builder.Size = UDim2.new(0, 175, 0, 28)
builder.Font = Enum.Font.SourceSans
builder.Text = "Builer X FE"
builder.TextColor3 = Color3.fromRGB(221, 221, 221)
builder.TextScaled = true
builder.TextSize = 14.000
builder.TextWrapped = true
builder.MouseButton1Down:connect (function()
loadstring(game:HttpGet('https://raw.githubusercontent.com/rozm12/lol/master/builder%20x'))()
end)


builder_2.Name = "builder"
builder_2.Parent = ScrollingFrame
builder_2.BackgroundColor3 = Color3.fromRGB(24, 24, 24)
builder_2.BorderColor3 = Color3.fromRGB(37, 37, 35)
builder_2.BorderSizePixel = 2
builder_2.Position = UDim2.new(0.0683651268, 0, 0.143578202, 0)
builder_2.Size = UDim2.new(0, 175, 0, 28)
builder_2.Font = Enum.Font.SourceSans
builder_2.Text = "HomeBrew"
builder_2.TextColor3 = Color3.fromRGB(221, 221, 221)
builder_2.TextScaled = true
builder_2.TextSize = 14.000
builder_2.TextWrapped = true
builder_2.MouseButton1Down:connect (function()
loadstring(game:HttpGet('https://raw.githubusercontent.com/rozm12/lol/master/wssa'))()
end)

builder_3.Name = "builder"
builder_3.Parent = ScrollingFrame
builder_3.BackgroundColor3 = Color3.fromRGB(24, 24, 24)
builder_3.BorderColor3 = Color3.fromRGB(37, 37, 35)
builder_3.BorderSizePixel = 2
builder_3.Position = UDim2.new(0.0589311644, 0, 0.213549048, 0)
builder_3.Size = UDim2.new(0, 175, 0, 28)
builder_3.Font = Enum.Font.SourceSans
builder_3.Text = "Fe Dragon. Rare one"
builder_3.TextColor3 = Color3.fromRGB(221, 221, 221)
builder_3.TextScaled = true
builder_3.TextSize = 14.000
builder_3.TextWrapped = true
builder_3.MouseButton1Down:connect (function()
loadstring(game:HttpGet('https://raw.githubusercontent.com/rozm12/wqsqssqws/master/a'))()
end)

builder_4.Name = "builder"
builder_4.Parent = ScrollingFrame
builder_4.BackgroundColor3 = Color3.fromRGB(24, 24, 24)
builder_4.BorderColor3 = Color3.fromRGB(37, 37, 35)
builder_4.BorderSizePixel = 2
builder_4.Position = UDim2.new(0.0683651268, 0, 0.287893057, 0)
builder_4.Size = UDim2.new(0, 175, 0, 28)
builder_4.Font = Enum.Font.SourceSans
builder_4.Text = "FE suicide"
builder_4.TextColor3 = Color3.fromRGB(221, 221, 221)
builder_4.TextScaled = true
builder_4.TextSize = 14.000
builder_4.TextWrapped = true
builder_4.MouseButton1Down:connect (function()
loadstring(game:HttpGet('https://raw.githubusercontent.com/rozm12/lol/master/yk'))()
end)

builder_5.Name = "builder"
builder_5.Parent = ScrollingFrame
builder_5.BackgroundColor3 = Color3.fromRGB(24, 24, 24)
builder_5.BorderColor3 = Color3.fromRGB(37, 37, 35)
builder_5.BorderSizePixel = 2
builder_5.Position = UDim2.new(0.0683651268, 0, 0.352032989, 0)
builder_5.Size = UDim2.new(0, 175, 0, 28)
builder_5.Font = Enum.Font.SourceSans
builder_5.Text = "Suicide by Sans"
builder_5.TextColor3 = Color3.fromRGB(221, 221, 221)
builder_5.TextScaled = true
builder_5.TextSize = 14.000
builder_5.TextWrapped = true

sanshub.Name = "sanshub"
sanshub.Parent = ScrollingFrame
sanshub.BackgroundColor3 = Color3.fromRGB(24, 24, 24)
sanshub.BorderColor3 = Color3.fromRGB(37, 37, 35)
sanshub.BorderSizePixel = 2
sanshub.Position = UDim2.new(-2.8397212, 0, 0.451895088, 0)
sanshub.Size = UDim2.new(0, 175, 0, 28)
sanshub.Font = Enum.Font.SourceSans
sanshub.Text = "FE Grab knife, Comming soon"
sanshub.TextColor3 = Color3.fromRGB(221, 221, 221)
sanshub.TextScaled = true
sanshub.TextSize = 14.000
sanshub.TextWrapped = true


sanshub_2.Name = "sanshub"
sanshub_2.Parent = ScrollingFrame
sanshub_2.BackgroundColor3 = Color3.fromRGB(24, 24, 24)
sanshub_2.BorderColor3 = Color3.fromRGB(37, 37, 35)
sanshub_2.BorderSizePixel = 2
sanshub_2.Position = UDim2.new(0.0565052703, 0, 0.412536472, 0)
sanshub_2.Size = UDim2.new(0, 175, 0, 28)
sanshub_2.Font = Enum.Font.SourceSans
sanshub_2.Text = " Sans Hub"
sanshub_2.TextColor3 = Color3.fromRGB(221, 221, 221)
sanshub_2.TextScaled = true
sanshub_2.TextSize = 14.000
sanshub_2.TextWrapped = true
sanshub_2.MouseButton1Down:connect (function()
loadstring(game:HttpGet('https://raw.githubusercontent.com/rozm12/wqsqssqws/master/noob'))()
end)

close_2.Name = "close"
close_2.Parent = maingui
close_2.BackgroundColor3 = Color3.fromRGB(26, 29, 28)
close_2.BorderSizePixel = 0
close_2.Position = UDim2.new(0.334840894, 0, 0.189415038, 0)
close_2.Size = UDim2.new(0, 104, 0, 33)
close_2.Font = Enum.Font.SourceSans
close_2.Text = "Settings"
close_2.TextColor3 = Color3.fromRGB(251, 255, 242)
close_2.TextScaled = true
close_2.TextSize = 14.000
close_2.TextWrapped = true
close_2.MouseButton1Down:connect (function()
	maingui.Visible = false
	Settings.Visible = true
end)


TextLabel.Parent = maingui
TextLabel.BackgroundColor3 = Color3.fromRGB(24, 24, 24)
TextLabel.BorderColor3 = Color3.fromRGB(37, 37, 35)
TextLabel.BorderSizePixel = 2
TextLabel.Position = UDim2.new(0.503744245, 0, 0.402332366, 0)
TextLabel.Size = UDim2.new(0, 225, 0, 152)
TextLabel.Font = Enum.Font.SourceSans
TextLabel.Text = ""
TextLabel.TextColor3 = Color3.fromRGB(0, 0, 0)
TextLabel.TextSize = 14.000

VOID_2.Name = "VOID"
VOID_2.Parent = TextLabel
VOID_2.BackgroundColor3 = Color3.fromRGB(24, 24, 24)
VOID_2.BorderColor3 = Color3.fromRGB(37, 37, 35)
VOID_2.BorderSizePixel = 2
VOID_2.Position = UDim2.new(0.112040065, 0, 0.275375962, 0)
VOID_2.Size = UDim2.new(0, 174, 0, 40)
VOID_2.Font = Enum.Font.SourceSans
VOID_2.Text = " Soon"
VOID_2.TextColor3 = Color3.fromRGB(221, 221, 221)
VOID_2.TextScaled = true
VOID_2.TextSize = 14.000
VOID_2.TextWrapped = true

opengui.Name = "opengui"
opengui.Parent = ScreenGui
opengui.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
opengui.Position = UDim2.new(0.00544323493, 0, 0.441761374, 0)
opengui.Size = UDim2.new(0, 100, 0, 18)
opengui.Visible = false

open.Name = "open"
open.Parent = opengui
open.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
open.BorderSizePixel = 2
open.Position = UDim2.new(0, 0, -0.111111164, 0)
open.Size = UDim2.new(0, 100, 0, 21)
open.Font = Enum.Font.SourceSans
open.Text = "Open"
open.TextColor3 = Color3.fromRGB(0, 0, 0)
open.TextScaled = true
open.TextSize = 14.000
open.TextWrapped = true
open.MouseButton1Down:connect (function()
	Page2.Visible = true
	opengui.Visible = false
	
	
end)


Page2.Name = "Page2"
Page2.Parent = ScreenGui
Page2.BackgroundColor3 = Color3.fromRGB(26, 29, 28)
Page2.BorderColor3 = Color3.fromRGB(241, 255, 249)
Page2.Position = UDim2.new(0.00994503498, 0, 0.276778668, 0)
Page2.Size = UDim2.new(0, 560, 0, 343)
Page2.Visible = false
Page2.Active = true
Page2.Draggable = true


main.Name = "main"
main.Parent = Page2
main.BackgroundColor3 = Color3.fromRGB(26, 29, 28)
main.BorderSizePixel = 0
main.Position = UDim2.new(0.0580551773, 0, 0.189415038, 0)
main.Size = UDim2.new(0, 104, 0, 33)
main.Font = Enum.Font.SourceSans
main.Text = "Main"
main.TextColor3 = Color3.fromRGB(251, 255, 242)
main.TextScaled = true
main.TextSize = 14.000
main.TextWrapped = true
main.MouseButton1Down:connect (function()
	Page2.Visible = false
	maingui.Visible = true
end)

line_2.Name = "line"
line_2.Parent = Page2
line_2.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
line_2.BorderColor3 = Color3.fromRGB(241, 255, 238)
line_2.Position = UDim2.new(0, 0, 0.893110931, 0)
line_2.Size = UDim2.new(0, 560, 0, 0)
line_2.Font = Enum.Font.SourceSans
line_2.Text = "     "
line_2.TextColor3 = Color3.fromRGB(234, 234, 234)
line_2.TextSize = 14.000

ScrollingFrame_2.Parent = Page2
ScrollingFrame_2.Active = true
ScrollingFrame_2.BackgroundColor3 = Color3.fromRGB(24, 24, 24)
ScrollingFrame_2.BorderColor3 = Color3.fromRGB(37, 37, 35)
ScrollingFrame_2.BorderSizePixel = 2
ScrollingFrame_2.Position = UDim2.new(0.0366266519, 0, 0.297376186, 0)
ScrollingFrame_2.Size = UDim2.new(0, 212, 0, 185)
ScrollingFrame_2.CanvasPosition = Vector2.new(0, 150)

TextButton.Parent = ScrollingFrame_2
TextButton.BackgroundColor3 = Color3.fromRGB(24, 24, 24)
TextButton.BorderColor3 = Color3.fromRGB(37, 37, 35)
TextButton.BorderSizePixel = 2
TextButton.Position = UDim2.new(0.0612222478, 0, 0.138483971, 0)
TextButton.Size = UDim2.new(0, 175, 0, 28)
TextButton.Font = Enum.Font.SourceSans
TextButton.Text = "Void V2"
TextButton.TextColor3 = Color3.fromRGB(221, 221, 221)
TextButton.TextScaled = true
TextButton.TextSize = 14.000
TextButton.TextWrapped = true
TextButton.MouseButton1Down:connect (function()
loadstring(game:HttpGet('https://raw.githubusercontent.com/rozm12/lol/master/swss'))()
end)

TextButton_2.Parent = ScrollingFrame_2
TextButton_2.BackgroundColor3 = Color3.fromRGB(24, 24, 24)
TextButton_2.BorderColor3 = Color3.fromRGB(37, 37, 35)
TextButton_2.BorderSizePixel = 2
TextButton_2.Position = UDim2.new(0.0612222515, 0, 0.0174927171, 0)
TextButton_2.Size = UDim2.new(0, 175, 0, 28)
TextButton_2.Font = Enum.Font.SourceSans
TextButton_2.Text = "Bypassed Animations"
TextButton_2.TextColor3 = Color3.fromRGB(221, 221, 221)
TextButton_2.TextScaled = true
TextButton_2.TextSize = 14.000
TextButton_2.TextWrapped = true
TextButton_2.MouseButton1Down:connect (function()
loadstring(game:HttpGet('https://raw.githubusercontent.com/rozm12/lol/master/swswsws'))()
end)


TextButton_3.Parent = ScrollingFrame_2
TextButton_3.BackgroundColor3 = Color3.fromRGB(24, 24, 24)
TextButton_3.BorderColor3 = Color3.fromRGB(37, 37, 35)
TextButton_3.BorderSizePixel = 2
TextButton_3.Position = UDim2.new(0.0612222515, 0, 0.077259481, 0)
TextButton_3.Size = UDim2.new(0, 175, 0, 28)
TextButton_3.Font = Enum.Font.SourceSans
TextButton_3.Text = "Jojo Stand V2"
TextButton_3.TextColor3 = Color3.fromRGB(221, 221, 221)
TextButton_3.TextScaled = true
TextButton_3.TextSize = 14.000
TextButton_3.TextWrapped = true
TextButton_3.MouseButton1Down:connect (function()
loadstring(game:HttpGet('https://raw.githubusercontent.com/rozm12/lol/master/jojo%20stand%20v2'))()
end)

TextButton_4.Parent = ScrollingFrame_2
TextButton_4.BackgroundColor3 = Color3.fromRGB(24, 24, 24)
TextButton_4.BorderColor3 = Color3.fromRGB(37, 37, 35)
TextButton_4.BorderSizePixel = 2
TextButton_4.Position = UDim2.new(0.0659392327, 0, 0.205539376, 0)
TextButton_4.Size = UDim2.new(0, 175, 0, 28)
TextButton_4.Font = Enum.Font.SourceSans
TextButton_4.Text = " Strees fling"
TextButton_4.TextColor3 = Color3.fromRGB(221, 221, 221)
TextButton_4.TextScaled = true
TextButton_4.TextSize = 14.000
TextButton_4.TextWrapped = true
TextButton_4.MouseButton1Down:connect (function()
loadstring(game:HttpGet('https://raw.githubusercontent.com/rozm12/lol/master/streets%20fling'))()
end)


TextButton_5.Parent = ScrollingFrame_2
TextButton_5.BackgroundColor3 = Color3.fromRGB(24, 24, 24)
TextButton_5.BorderColor3 = Color3.fromRGB(37, 37, 35)
TextButton_5.BorderSizePixel = 2
TextButton_5.Position = UDim2.new(0.0659392327, 0, 0.269679338, 0)
TextButton_5.Size = UDim2.new(0, 175, 0, 28)
TextButton_5.Font = Enum.Font.SourceSans
TextButton_5.Text = " Hilter Pose"
TextButton_5.TextColor3 = Color3.fromRGB(221, 221, 221)
TextButton_5.TextScaled = true
TextButton_5.TextSize = 14.000
TextButton_5.TextWrapped = true
TextButton_5.MouseButton1Down:connect (function()
loadstring(game:HttpGet('https://raw.githubusercontent.com/rozm12/lol/master/fe'))()
end)

Set.Name = "Set"
Set.Parent = Page2
Set.BackgroundColor3 = Color3.fromRGB(26, 29, 28)
Set.BorderSizePixel = 0
Set.Position = UDim2.new(0.334840894, 0, 0.189415038, 0)
Set.Size = UDim2.new(0, 104, 0, 33)
Set.Font = Enum.Font.SourceSans
Set.Text = "close"
Set.TextColor3 = Color3.fromRGB(251, 255, 242)
Set.TextScaled = true
Set.TextSize = 14.000
Set.TextWrapped = true
Set.MouseButton1Down:connect (function()
	Page2.Visible = false
	opengui.Visible = true
	
end)

UImadeby.Name = "UImadeby"
UImadeby.Parent = Page2
UImadeby.BackgroundColor3 = Color3.fromRGB(24, 24, 24)
UImadeby.BorderColor3 = Color3.fromRGB(37, 37, 35)
UImadeby.BorderSizePixel = 2
UImadeby.Position = UDim2.new(0.591071427, 0, 0.323525846, 0)
UImadeby.Size = UDim2.new(0, 200, 0, 169)
UImadeby.Font = Enum.Font.SourceSans
UImadeby.Text = ""
UImadeby.TextColor3 = Color3.fromRGB(0, 0, 0)
UImadeby.TextSize = 14.000

textcredit.Name = "textcredit"
textcredit.Parent = Page2
textcredit.BackgroundColor3 = Color3.fromRGB(24, 24, 24)
textcredit.BorderSizePixel = 0
textcredit.Position = UDim2.new(0.619815588, 0, 0.370262384, 0)
textcredit.Size = UDim2.new(0, 163, 0, 50)
textcredit.Font = Enum.Font.SourceSans
textcredit.Text = "UI made by Lunar#8881"
textcredit.TextColor3 = Color3.fromRGB(255, 255, 255)
textcredit.TextScaled = true
textcredit.TextSize = 14.000
textcredit.TextWrapped = true

cum.Name = "cum"
cum.Parent = Page2
cum.BackgroundColor3 = Color3.fromRGB(24, 24, 24)
cum.BorderSizePixel = 0
cum.Position = UDim2.new(0.619815588, 0, 0.600583076, 0)
cum.Size = UDim2.new(0, 163, 0, 50)
cum.Font = Enum.Font.SourceSans
cum.Text = "Lunar#8881- All scripts inside"
cum.TextColor3 = Color3.fromRGB(255, 255, 255)
cum.TextSize = 20.000
cum.TextWrapped = true

Cyber.Name = "Cyber"
Cyber.Parent = Page2
Cyber.BackgroundColor3 = Color3.fromRGB(26, 29, 28)
Cyber.BorderColor3 = Color3.fromRGB(233, 255, 237)
Cyber.BorderSizePixel = 0
Cyber.Position = UDim2.new(0.351958483, 0, 0.0340515375, 0)
Cyber.Size = UDim2.new(0, 85, 0, 50)
Cyber.Font = Enum.Font.SourceSans
Cyber.Text = "Cyber"
Cyber.TextColor3 = Color3.fromRGB(255, 255, 255)
Cyber.TextScaled = true
Cyber.TextSize = 14.000
Cyber.TextWrapped = true

Hub.Name = "Hub"
Hub.Parent = Page2
Hub.BackgroundColor3 = Color3.fromRGB(26, 29, 28)
Hub.BorderColor3 = Color3.fromRGB(233, 255, 237)
Hub.BorderSizePixel = 0
Hub.Position = UDim2.new(0.505357146, 0, 0.0312525295, 0)
Hub.Size = UDim2.new(0, 71, 0, 50)
Hub.Font = Enum.Font.SourceSans
Hub.Text = "Hub"
Hub.TextColor3 = Color3.fromRGB(252, 33, 44)
Hub.TextScaled = true
Hub.TextSize = 14.000
Hub.TextWrapped = true

Settings.Name = "Settings"
Settings.Parent = ScreenGui
Settings.BackgroundColor3 = Color3.fromRGB(26, 29, 28)
Settings.BorderColor3 = Color3.fromRGB(241, 255, 249)
Settings.Position = UDim2.new(0.0149139613, 0, 0.235158771, 0)
Settings.Size = UDim2.new(0, 560, 0, 343)
Settings.Visible = false
Settings.Active = true
Settings.Draggable = true


main_2.Name = "main"
main_2.Parent = Settings
main_2.BackgroundColor3 = Color3.fromRGB(26, 29, 28)
main_2.BorderSizePixel = 0
main_2.Position = UDim2.new(0.0580551773, 0, 0.189415038, 0)
main_2.Size = UDim2.new(0, 104, 0, 33)
main_2.Font = Enum.Font.SourceSans
main_2.Text = "Main"
main_2.TextColor3 = Color3.fromRGB(251, 255, 242)
main_2.TextScaled = true
main_2.TextSize = 14.000
main_2.TextWrapped = true
main_2.MouseButton1Down:connect (function()
	Settings.Visible = false
	maingui.Visible = true
	
end)

line_3.Name = "line"
line_3.Parent = Settings
line_3.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
line_3.BorderColor3 = Color3.fromRGB(241, 255, 238)
line_3.Position = UDim2.new(0, 0, 0.893110931, 0)
line_3.Size = UDim2.new(0, 560, 0, 0)
line_3.Font = Enum.Font.SourceSans
line_3.Text = "     "
line_3.TextColor3 = Color3.fromRGB(234, 234, 234)
line_3.TextSize = 14.000

ScrollingFrame_3.Parent = Settings
ScrollingFrame_3.Active = true
ScrollingFrame_3.BackgroundColor3 = Color3.fromRGB(24, 24, 24)
ScrollingFrame_3.BorderColor3 = Color3.fromRGB(37, 37, 35)
ScrollingFrame_3.BorderSizePixel = 2
ScrollingFrame_3.Position = UDim2.new(0.0312695093, 0, 0.303207099, 0)
ScrollingFrame_3.Size = UDim2.new(0, 212, 0, 185)
ScrollingFrame_3.CanvasPosition = Vector2.new(0, 150)

TextButton_6.Parent = ScrollingFrame_3
TextButton_6.BackgroundColor3 = Color3.fromRGB(24, 24, 24)
TextButton_6.BorderColor3 = Color3.fromRGB(37, 37, 35)
TextButton_6.BorderSizePixel = 2
TextButton_6.Position = UDim2.new(0.0612222478, 0, 0.138483971, 0)
TextButton_6.Size = UDim2.new(0, 175, 0, 28)
TextButton_6.Font = Enum.Font.SourceSans
TextButton_6.Text = "UI"
TextButton_6.TextColor3 = Color3.fromRGB(221, 221, 221)
TextButton_6.TextScaled = true
TextButton_6.TextSize = 14.000
TextButton_6.TextWrapped = true

TextButton_7.Parent = ScrollingFrame_3
TextButton_7.BackgroundColor3 = Color3.fromRGB(24, 24, 24)
TextButton_7.BorderColor3 = Color3.fromRGB(37, 37, 35)
TextButton_7.BorderSizePixel = 2
TextButton_7.Position = UDim2.new(0.0612222515, 0, 0.0174927171, 0)
TextButton_7.Size = UDim2.new(0, 175, 0, 28)
TextButton_7.Font = Enum.Font.SourceSans
TextButton_7.Text = "Settings"
TextButton_7.TextColor3 = Color3.fromRGB(221, 221, 221)
TextButton_7.TextScaled = true
TextButton_7.TextSize = 14.000
TextButton_7.TextWrapped = true

TextButton_8.Parent = ScrollingFrame_3
TextButton_8.BackgroundColor3 = Color3.fromRGB(24, 24, 24)
TextButton_8.BorderColor3 = Color3.fromRGB(37, 37, 35)
TextButton_8.BorderSizePixel = 2
TextButton_8.Position = UDim2.new(0.0612222515, 0, 0.077259481, 0)
TextButton_8.Size = UDim2.new(0, 175, 0, 28)
TextButton_8.Font = Enum.Font.SourceSans
TextButton_8.Text = "Anti Logger"
TextButton_8.TextColor3 = Color3.fromRGB(221, 221, 221)
TextButton_8.TextScaled = true
TextButton_8.TextSize = 14.000
TextButton_8.TextWrapped = true
TextButton_8.MouseButton1Down:connect (function()
loadstring(game:HttpGet(('https://pastebin.com/raw/DsJ170Bz'),true))()
end)


TextButton_9.Parent = ScrollingFrame_3
TextButton_9.BackgroundColor3 = Color3.fromRGB(24, 24, 24)
TextButton_9.BorderColor3 = Color3.fromRGB(37, 37, 35)
TextButton_9.BorderSizePixel = 2
TextButton_9.Position = UDim2.new(0.0659392327, 0, 0.204081655, 0)
TextButton_9.Size = UDim2.new(0, 175, 0, 28)
TextButton_9.Font = Enum.Font.SourceSans
TextButton_9.Text = "NoobFrick. RARE"
TextButton_9.TextColor3 = Color3.fromRGB(221, 221, 221)
TextButton_9.TextScaled = true
TextButton_9.TextSize = 14.000
TextButton_9.TextWrapped = true
TextButton_9.MouseButton1Down:connect (function()
loadstring(game:HttpGet('https://raw.githubusercontent.com/rozm12/lol/master/noob'))()
end)

TextButton_10.Parent = ScrollingFrame_3
TextButton_10.BackgroundColor3 = Color3.fromRGB(24, 24, 24)
TextButton_10.BorderColor3 = Color3.fromRGB(37, 37, 35)
TextButton_10.BorderSizePixel = 2
TextButton_10.Position = UDim2.new(0.0848071575, 0, 0.266763866, 0)
TextButton_10.Size = UDim2.new(0, 175, 0, 28)
TextButton_10.Font = Enum.Font.SourceSans
TextButton_10.Text = "Fe Rare Penis"
TextButton_10.TextColor3 = Color3.fromRGB(221, 221, 221)
TextButton_10.TextScaled = true
TextButton_10.TextSize = 14.000
TextButton_10.TextWrapped = true
TextButton_10.MouseButton1Down:connect (function()
-- Made by Sans
   wait()
    for i,v in pairs(game.Players.LocalPlayer.Character:GetChildren()) do
    if v.Name == "RockAccessorye" then v.Parent = workspace
        v.Handle.SpecialMesh:Destroy()
        v.Handle.Transparency = 0
        v.Handle.CanCollide = true
    end
    end
    
    wait(1)
    
local Plr = game:GetService("Players").LocalPlayer

local Anim = Instance.new("Animation")
Anim.AnimationId = "rbxassetid://"
local k = Plr.Character.Humanoid:LoadAnimation(Anim)
k:Play()
k:AdjustSpeed(1)





local unanchoredparts = {}
local movers = {}
local tog = true
local move = false
local Player = game:GetService("Players").LocalPlayer
local Character = Player.Character
local mov = {};
local mov2 = {};




local Hats = {
    gun = Character:WaitForChild("Jackette's SluggerAccessory"),
             
}



Hats.gun.Handle.AccessoryWeld:Remove()



local Network = coroutine.create(function()
while true do
game:GetService("RunService").Heartbeat:Wait()
settings().Physics.AllowSleep = false
game:GetService("Players").LocalPlayer.MaximumSimulationRadius = math.pow(math.huge,math.huge)*math.huge
game:GetService("Players").LocalPlayer.SimulationRadius = math.pow(math.huge,math.huge)*math.huge
end
end)
coroutine.resume(Network)


Character.Head.Transparency = 0
Character.Torso.Transparency = 0
Character["Right Arm"].Transparency = 0
Character["Left Arm"].Transparency = 0
Character["Right Leg"].Transparency = 0
Character["Left Leg"].Transparency = 0
local function align(i,v)
local att0 = Instance.new("Attachment", i)
att0.Position = Vector3.new(0,0,0)
local att1 = Instance.new("Attachment", v)
att1.Position = Vector3.new(0,0,0)
local AP = Instance.new("AlignPosition", i)
AP.Attachment0 = att0
AP.Attachment1 = att1
AP.RigidityEnabled = false
AP.ReactionForceEnabled = false
AP.ApplyAtCenterOfMass = true
AP.MaxForce = 9999999
AP.MaxVelocity = math.huge
AP.Responsiveness = 64
local AO = Instance.new("AlignOrientation", i)
AO.Attachment0 = att0
AO.Attachment1 = att1
AO.ReactionTorqueEnabled = true
AO.PrimaryAxisOnly = false
AO.MaxTorque = 9999999
AO.MaxAngularVelocity = math.huge
AO.Responsiveness = 50
end
align(Hats.gun.Handle, Character["Torso"])

Hats.gun.Handle.Attachment.Orientation = Vector3.new(90,90,0)

Character:WaitForChild("Torso").Attachment.Position = Vector3.new(0,0,-1.8)

game.Players.LocalPlayer:GetMouse().KeyDown:Connect(function(KeyPressed)
 if KeyPressed == "r" then
     if toggle == false then
         local Anim = Instance.new("Animation")
Anim.AnimationId = "rbxassetid://"
local k = Plr.Character.Humanoid:LoadAnimation(Anim)
k:Play()
k:AdjustSpeed(1)
         
         Hats.gun.Handle.Attachment.Orientation = Vector3.new(90,90,0)

Character:WaitForChild("Torso").Attachment.Position = Vector3.new(0,0,-1.8)

        toggle = true
        
        else
            local Anim = Instance.new("Animation")
Anim.AnimationId = "rbxassetid://"
local k = Plr.Character.Humanoid:LoadAnimation(Anim)
k:Play()
k:AdjustSpeed(1)

Hats.gun.Handle.Attachment.Orientation = Vector3.new(90,90,0)

Character:WaitForChild("Torso").Attachment.Position = Vector3.new(0,0,-1.8)
            toggle = false
     end
end
end)


game.Players.LocalPlayer:GetMouse().KeyDown:Connect(function(KeyPressed)
 if KeyPressed == "r" then
     if toggle == false then
         wait()
         local Anim = Instance.new("Animation")
Anim.AnimationId = "rbxassetid://"
local k = Plr.Character.Humanoid:LoadAnimation(Anim)
k:Play()

         
         Hats.gun.Handle.Attachment.Orientation = Vector3.new(90,-90,0)

Character:WaitForChild("Torso").Attachment.Position = Vector3.new(0,-2,-1.8)

        toggle = true
        
        else
            
            wait()
            local Anim = Instance.new("Animation")
Anim.AnimationId = "rbxassetid://7"
local r = Plr.Character.Humanoid:LoadAnimation(Anim)
r:Play()



Hats.gun.Handle.Attachment.Orientation = Vector3.new(90,90,0)

Character:WaitForChild("Torso").Attachment.Position = Vector3.new(0,0,-1.8)
            toggle = false
     end
end
end)





game.Players.LocalPlayer:GetMouse().KeyDown:Connect(function(KeyPressed)
 if KeyPressed == "f" then
     if toggle == true then
         toggle = false
          for index, part in pairs(workspace:GetDescendants()) do
    if part:IsA("BasePart") and part.Anchored == false and part:IsDescendantOf(Player.Character) == false and part.Parent.Name == "RockAccessory" then
        table.insert(unanchoredparts, part)
        part.Massless = true
        part.CanCollide = false
        part.Transparency = 0
        if part:FindFirstChildOfClass("BodyPosition") ~= nil then
            part:FindFirstChildOfClass("BodyPosition"):Destroy()
        end
    end
end
for index, part in pairs(unanchoredparts) do
    local mover = Instance.new("BodyPosition", part)
    table.insert(movers, mover)
    mover.MaxForce = Vector3.new(math.huge, math.huge, math.huge)
    local temp1 = Instance.new("BodyThrust", part)
    temp1.Location = Vector3.new(4,0,0)
    temp1.Force = Vector3.new(0,40,40)
    end
        
for index, mover in pairs(movers) do
        mover.Position = Player.Character:FindFirstChild("HumanoidRootPart").CFrame:PointToWorldSpace(Vector3.new(0, 2, 0))
    end
    wait(1)

         for index, mover in pairs(movers) do
        mover.Position = Player.Character:FindFirstChild("HumanoidRootPart").CFrame:PointToWorldSpace(Vector3.new(0, 0, -100))
        
         end
    
        wait(0.25)
        
          for index, mover in pairs(movers) do
        mover.Position = Player.Character:FindFirstChild("HumanoidRootPart").CFrame:PointToWorldSpace(Vector3.new(0, -30, 0))
        
          end
	
	 wait(0.5)
	 toggle = true
        end
    end
end)


end)

Set_2.Name = "Set"
Set_2.Parent = Settings
Set_2.BackgroundColor3 = Color3.fromRGB(26, 29, 28)
Set_2.BorderSizePixel = 0
Set_2.Position = UDim2.new(0.334840894, 0, 0.189415038, 0)
Set_2.Size = UDim2.new(0, 104, 0, 33)
Set_2.Font = Enum.Font.SourceSans
Set_2.Text = "Settings"
Set_2.TextColor3 = Color3.fromRGB(251, 255, 242)
Set_2.TextScaled = true
Set_2.TextSize = 14.000
Set_2.TextWrapped = true

UImadeby_2.Name = "UImadeby"
UImadeby_2.Parent = Settings
UImadeby_2.BackgroundColor3 = Color3.fromRGB(24, 24, 24)
UImadeby_2.BorderColor3 = Color3.fromRGB(37, 37, 35)
UImadeby_2.BorderSizePixel = 2
UImadeby_2.Position = UDim2.new(0.591071427, 0, 0.323525846, 0)
UImadeby_2.Size = UDim2.new(0, 200, 0, 169)
UImadeby_2.Font = Enum.Font.SourceSans
UImadeby_2.Text = ""
UImadeby_2.TextColor3 = Color3.fromRGB(0, 0, 0)
UImadeby_2.TextSize = 14.000

Credits_3.Name = "Credits"
Credits_3.Parent = Settings
Credits_3.BackgroundColor3 = Color3.fromRGB(24, 24, 24)
Credits_3.BorderColor3 = Color3.fromRGB(37, 37, 35)
Credits_3.BorderSizePixel = 2
Credits_3.Position = UDim2.new(0.619815588, 0, 0.24198252, 0)
Credits_3.Size = UDim2.new(0, 95, 0, 27)
Credits_3.Font = Enum.Font.SourceSans
Credits_3.Text = "Credits"
Credits_3.TextColor3 = Color3.fromRGB(255, 255, 255)
Credits_3.TextSize = 20.000
Credits_3.TextWrapped = true

textcredit_2.Name = "textcredit"
textcredit_2.Parent = Settings
textcredit_2.BackgroundColor3 = Color3.fromRGB(24, 24, 24)
textcredit_2.BorderSizePixel = 0
textcredit_2.Position = UDim2.new(0.619815588, 0, 0.370262384, 0)
textcredit_2.Size = UDim2.new(0, 163, 0, 50)
textcredit_2.Font = Enum.Font.SourceSans
textcredit_2.Text = "UI made by Lunar#8881"
textcredit_2.TextColor3 = Color3.fromRGB(255, 255, 255)
textcredit_2.TextScaled = true
textcredit_2.TextSize = 14.000
textcredit_2.TextWrapped = true

cum_2.Name = "cum"
cum_2.Parent = Settings
cum_2.BackgroundColor3 = Color3.fromRGB(24, 24, 24)
cum_2.BorderSizePixel = 0
cum_2.Position = UDim2.new(0.619815588, 0, 0.556851268, 0)
cum_2.Size = UDim2.new(0, 163, 0, 50)
cum_2.Font = Enum.Font.SourceSans
cum_2.Text = "Lunar#8881- All scripts inside"
cum_2.TextColor3 = Color3.fromRGB(255, 255, 255)
cum_2.TextSize = 20.000
cum_2.TextWrapped = true

Cyber_2.Name = "Cyber"
Cyber_2.Parent = Settings
Cyber_2.BackgroundColor3 = Color3.fromRGB(26, 29, 28)
Cyber_2.BorderColor3 = Color3.fromRGB(233, 255, 237)
Cyber_2.BorderSizePixel = 0
Cyber_2.Position = UDim2.new(0.351958483, 0, 0.0340515375, 0)
Cyber_2.Size = UDim2.new(0, 85, 0, 50)
Cyber_2.Font = Enum.Font.SourceSans
Cyber_2.Text = "Cyber"
Cyber_2.TextColor3 = Color3.fromRGB(255, 255, 255)
Cyber_2.TextScaled = true
Cyber_2.TextSize = 14.000
Cyber_2.TextWrapped = true

Hub_2.Name = "Hub"
Hub_2.Parent = Settings
Hub_2.BackgroundColor3 = Color3.fromRGB(26, 29, 28)
Hub_2.BorderColor3 = Color3.fromRGB(233, 255, 237)
Hub_2.BorderSizePixel = 0
Hub_2.Position = UDim2.new(0.505357146, 0, 0.0312525295, 0)
Hub_2.Size = UDim2.new(0, 71, 0, 50)
Hub_2.Font = Enum.Font.SourceSans
Hub_2.Text = "Hub"
Hub_2.TextColor3 = Color3.fromRGB(252, 33, 44)
Hub_2.TextScaled = true
Hub_2.TextSize = 14.000
Hub_2.TextWrapped = true

cum_3.Name = "cum"
cum_3.Parent = Settings
cum_3.BackgroundColor3 = Color3.fromRGB(26, 29, 28)
cum_3.BorderSizePixel = 0
cum_3.Position = UDim2.new(0.41981557, 0, 0.711370289, 0)
cum_3.Size = UDim2.new(0, 89, 0, 50)
cum_3.Font = Enum.Font.SourceSans
cum_3.Text = "NoobFrick by Sans"
cum_3.TextColor3 = Color3.fromRGB(255, 255, 255)
cum_3.TextSize = 20.000
cum_3.TextWrapped = true

ForNiBs.Name = "ForNiBs"
ForNiBs.Parent = ScreenGui
ForNiBs.ZIndexBehavior = Enum.ZIndexBehavior.Sibling

Frame.Parent = ForNiBs
Frame.BackgroundColor3 = Color3.fromRGB(50, 50, 50)
Frame.BorderSizePixel = 0
Frame.Position = UDim2.new(0.425915718, 0, 0.350122899, 0)
Frame.Size = UDim2.new(0, 276, 0, 130)
Frame.Active = true
Frame.Draggable = true

Panel.Name = "Panel"
Panel.Parent = Frame
Panel.BackgroundColor3 = Color3.fromRGB(40, 40, 40)
Panel.BorderSizePixel = 0
Panel.Size = UDim2.new(0, 275, 0, 22)
Panel.Font = Enum.Font.SourceSans
Panel.Text = "Cyber X"
Panel.TextColor3 = Color3.fromRGB(255, 255, 255)
Panel.TextSize = 18.000

Input.Name = "Input"
Input.Parent = Frame
Input.BackgroundColor3 = Color3.fromRGB(70, 70, 70)
Input.BorderSizePixel = 0
Input.Position = UDim2.new(0.0363636352, 0, 0.340126514, 0)
Input.Size = UDim2.new(0, 255, 0, 15)
Input.ClearTextOnFocus = false
Input.Font = Enum.Font.SourceSans
Input.PlaceholderColor3 = Color3.fromRGB(255, 255, 255)
Input.PlaceholderText = "Enter Your Key Here"
Input.Text = ""
Input.TextColor3 = Color3.fromRGB(255, 255, 255)
Input.TextSize = 14.000

CheckSystem.Name = "CheckSystem"
CheckSystem.Parent = Frame
CheckSystem.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
CheckSystem.BorderSizePixel = 0
CheckSystem.Position = UDim2.new(0.276363641, 0, 0.620013177, 0)
CheckSystem.Size = UDim2.new(0, 122, 0, 17)
CheckSystem.Font = Enum.Font.SourceSans
CheckSystem.Text = "Whitelist"
CheckSystem.TextColor3 = Color3.fromRGB(0, 0, 0)
CheckSystem.TextSize = 14.000
CoolThing.Visible = false

--Those local scripts create a home so yea
Input.MouseEnter:Connect(function()
    CoolThing.Visible = true
    CoolThing:TweenSize(UDim2.new(0, 255,0, 1))
    
end)

Input.MouseLeave:Connect(function()
    CoolThing:TweenSize(UDim2.new(0, 1,0, 1))
    wait(1)
    CoolThing.Visible = false
    
end)

CheckSystem.MouseButton1Down:Connect(function()
    if Input.Text == "SSWSSIRHURTISASSCKEY" then
        Frame:TweenPosition(UDim2.new(0.417, 0.417 ,0 , 1080))
    game:GetService("StarterGui"):SetCore("SendNotification", {
    Title = "Whitelisted,Thanks For buying!";
    Text = "By Lunar#8881!";
    Duration = 3;
		    }) wait(2)
		Frame.Visible = false
		maingui.Visible = true
    
        
        
        
        
    end
end)

CoolThing.Name = "CoolThing"
CoolThing.Parent = Frame
CoolThing.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
CoolThing.BorderColor3 = Color3.fromRGB(253, 255, 246)
CoolThing.Position = UDim2.new(0.0363636836, 0, 0.453845918, 0)
CoolThing.Size = UDim2.new(0, 6, 0, 0)
CoolThing.Font = Enum.Font.SourceSans
CoolThing.Text = ""
CoolThing.TextColor3 = Color3.fromRGB(0, 0, 0)
CoolThing.TextSize = 14.000

CoolThing.Name = "CoolThing"
CoolThing.Parent = Frame
CoolThing.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
CoolThing.BorderColor3 = Color3.fromRGB(253, 255, 246)
CoolThing.Position = UDim2.new(0.0363636836, 0, 0.453845918, 0)
CoolThing.Size = UDim2.new(0, 6, 0, 0)
CoolThing.Font = Enum.Font.SourceSans
CoolThing.Text = ""
CoolThing.TextColor3 = Color3.fromRGB(0, 0, 0)
CoolThing.TextSize = 14.000
