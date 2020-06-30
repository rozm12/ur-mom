-- Gui to Lua
-- Version: 3.2

-- Instances:

local ScreenGui = Instance.new("ScreenGui")
local logingui = Instance.new("Frame")
local Updated = Instance.new("TextLabel")
local Credits = Instance.new("TextLabel")
local line = Instance.new("TextLabel")
local TextBox = Instance.new("TextBox")
local TextLabel = Instance.new("TextLabel")
local TextButton = Instance.new("TextButton")
local maingui = Instance.new("Frame")
local VoidV2 = Instance.new("TextButton")
local close = Instance.new("TextButton")
local line_2 = Instance.new("TextLabel")
local credits = Instance.new("TextLabel")
local opengui = Instance.new("Frame")
local open = Instance.new("TextButton")

--Properties:

ScreenGui.Parent = game.Players.LocalPlayer:WaitForChild("PlayerGui")
ScreenGui.ZIndexBehavior = Enum.ZIndexBehavior.Sibling

logingui.Name = "logingui"
logingui.Parent = ScreenGui
logingui.BackgroundColor3 = Color3.fromRGB(26, 29, 28)
logingui.BorderColor3 = Color3.fromRGB(27, 42, 53)
logingui.Position = UDim2.new(0.203338057, 0, 0.183238655, 0)
logingui.Size = UDim2.new(0, 530, 0, 370)
logingui.Active = true
logingui.Draggable = true

Updated.Name = "Updated"
Updated.Parent = logingui
Updated.BackgroundColor3 = Color3.fromRGB(26, 29, 28)
Updated.BorderSizePixel = 0
Updated.Position = UDim2.new(0.0641509444, 0, 0.183783785, 0)
Updated.Size = UDim2.new(0, 188, 0, 50)
Updated.Font = Enum.Font.SourceSans
Updated.Text = "Currently Updated"
Updated.TextColor3 = Color3.fromRGB(53, 158, 52)
Updated.TextScaled = true
Updated.TextSize = 14.000
Updated.TextWrapped = true

Credits.Name = "Credits"
Credits.Parent = logingui
Credits.BackgroundColor3 = Color3.fromRGB(47, 161, 76)
Credits.BorderColor3 = Color3.fromRGB(233, 255, 237)
Credits.Position = UDim2.new(0.0415094346, 0, 0.0216216203, 0)
Credits.Size = UDim2.new(0, 200, 0, 50)
Credits.Font = Enum.Font.SourceSans
Credits.Text = "Croutoun Z"
Credits.TextColor3 = Color3.fromRGB(0, 0, 0)
Credits.TextScaled = true
Credits.TextSize = 14.000
Credits.TextWrapped = true

line.Name = "line"
line.Parent = logingui
line.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
line.Position = UDim2.new(0, 0, 0.891891897, 0)
line.Size = UDim2.new(0, 530, 0, 4)
line.Font = Enum.Font.SourceSans
line.Text = ""
line.TextColor3 = Color3.fromRGB(0, 0, 0)
line.TextSize = 14.000

TextBox.Parent = logingui
TextBox.BackgroundColor3 = Color3.fromRGB(38, 42, 41)
TextBox.BorderColor3 = Color3.fromRGB(237, 255, 236)
TextBox.BorderSizePixel = 2
TextBox.Position = UDim2.new(0.177358478, 0, 0.654054046, 0)
TextBox.Size = UDim2.new(0, 341, 0, 50)
TextBox.Font = Enum.Font.SourceSans
TextBox.Text = ""
TextBox.TextColor3 = Color3.fromRGB(255, 255, 255)
TextBox.TextScaled = true
TextBox.TextSize = 14.000
TextBox.TextWrapped = true

TextLabel.Parent = logingui
TextLabel.BackgroundColor3 = Color3.fromRGB(26, 29, 28)
TextLabel.BorderSizePixel = 0
TextLabel.Position = UDim2.new(0.311320782, 0, 0.478378385, 0)
TextLabel.Size = UDim2.new(0, 200, 0, 50)
TextLabel.Font = Enum.Font.SourceSans
TextLabel.Text = "KEY"
TextLabel.TextColor3 = Color3.fromRGB(255, 255, 255)
TextLabel.TextScaled = true
TextLabel.TextSize = 14.000
TextLabel.TextWrapped = true

TextButton.Parent = logingui
TextButton.BackgroundColor3 = Color3.fromRGB(26, 29, 28)
TextButton.BorderColor3 = Color3.fromRGB(237, 255, 229)
TextButton.BorderSizePixel = 2
TextButton.Position = UDim2.new(0.369811326, 0, 0.81621623, 0)
TextButton.Size = UDim2.new(0, 137, 0, 22)
TextButton.Font = Enum.Font.SourceSans
TextButton.Text = "Enter"
TextButton.TextColor3 = Color3.fromRGB(255, 255, 255)
TextButton.TextScaled = true
TextButton.TextSize = 14.000
TextButton.TextWrapped = true
TextButton.MouseButton1Down:connect (function()
	if TextBox.Text == "FDEEDWEWDDQWDSQW123S" then
		logingui.Visible = false
		opengui.Visible = true
	end
end)

maingui.Name = "maingui"
maingui.Parent = ScreenGui
maingui.BackgroundColor3 = Color3.fromRGB(26, 29, 28)
maingui.BorderColor3 = Color3.fromRGB(27, 42, 53)
maingui.Position = UDim2.new(0.277208507, 0, 0.232954547, 0)
maingui.Size = UDim2.new(0, 349, 0, 287)
maingui.Visible = false
maingui.Active = true
maingui.Draggable = true

VoidV2.Name = "VoidV2"
VoidV2.Parent = maingui
VoidV2.BackgroundColor3 = Color3.fromRGB(53, 158, 52)
VoidV2.BorderColor3 = Color3.fromRGB(246, 255, 244)
VoidV2.Position = UDim2.new(0.210693166, 0, 0.375185341, 0)
VoidV2.Size = UDim2.new(0, 200, 0, 50)
VoidV2.Font = Enum.Font.SourceSans
VoidV2.Text = "SpaceShip"
VoidV2.TextColor3 = Color3.fromRGB(0, 0, 0)
VoidV2.TextScaled = true
VoidV2.TextSize = 14.000
VoidV2.TextWrapped = true
VoidV2.MouseButton1Down:connect (function()
loadstring(game:HttpGet('https://raw.githubusercontent.com/rozm12/ur-mom/master/sctooer23'))()
end)

close.Name = "close"
close.Parent = maingui
close.BackgroundColor3 = Color3.fromRGB(189, 61, 39)
close.Position = UDim2.new(0.864176691, 0, 0, 0)
close.Size = UDim2.new(0, 47, 0, 50)
close.Font = Enum.Font.SourceSans
close.Text = "X"
close.TextColor3 = Color3.fromRGB(0, 0, 0)
close.TextScaled = true
close.TextSize = 14.000
close.TextWrapped = true
close.MouseButton1Down:connect (function()
maingui.Visible = false
opengui.Visible = true
end)


line_2.Name = "line"
line_2.Parent = maingui
line_2.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
line_2.Position = UDim2.new(0, 0, 0.909407675, 0)
line_2.Size = UDim2.new(0, 349, 0, 3)
line_2.Font = Enum.Font.SourceSans
line_2.Text = "     "
line_2.TextColor3 = Color3.fromRGB(234, 234, 234)
line_2.TextSize = 14.000

credits.Name = "credits"
credits.Parent = maingui
credits.BackgroundColor3 = Color3.fromRGB(26, 29, 28)
credits.BorderSizePixel = 0
credits.Position = UDim2.new(0, 0, 0.0209059231, 0)
credits.Size = UDim2.new(0, 152, 0, 50)
credits.Font = Enum.Font.SourceSans
credits.Text = "UI, Whitelist by cum#8881, Script By Paplioh#0001."
credits.TextColor3 = Color3.fromRGB(255, 255, 255)
credits.TextScaled = true
credits.TextSize = 14.000
credits.TextWrapped = true

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
maingui.Visible = true
opengui.Visible = false
end)
