set PATH=%PATH%;%WIX%bin\
torch.exe -p -xi ..\4-3-Patch-Error\bin\Release\4-3-Patch-Error.wixpdb ..\4-3-Patch-Fixed\bin\Release\4-3-Patch-Fixed.wixpdb -out SamplePatch.wixmst
candle.exe SamplePatch.wxs
light.exe SamplePatch.wixobj
pyro.exe SamplePatch.wixmsp -out SamplePatch.msp -t Sample SamplePatch.wixmst