// ============================================================
// 函数名称: sub_452f08
// 虚拟地址: 0x452f08
// WARP GUID: 68068c51-f812-5e96-b36b-3dfbbd306822
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: DescribePixelFormat, SetPixelFormat, ChoosePixelFormat, wglCreateLayerContext, GetObjectType
// [内部子函数调用]: sub_402d00, sub_4530e0, sub_406c44, sub_40c7bc, sub_452db8
// [被调用的父级函数]: sub_473938
// ============================================================

HGLRC __fastcallsub_452f08(char arg1, char arg2, HGDIOBJ arg3 @ eax, int32_t arg4, char arg5, char arg6, char arg7)
{
    // 第一条实际指令: PIXELFORMATDESCRIPTOR ppfd
    PIXELFORMATDESCRIPTOR ppfd
    sub_402d00(&ppfd, 0x28, 0)
    ppfd.nSize = 0x28
    ppfd.nVersion = 1
    ppfd.dwFlags = 0x20
    uint32_t eax_1 = GetObjectType(arg3)
    
    if (eax_1 == 0)
        sub_40c7bc()
        noreturn
    
    if (eax_1 == 4 || eax_1 == 0xa || eax_1 == 0xc)
        ppfd.dwFlags |= 8
    else
        ppfd.dwFlags |= 4
    
    if ((arg2 & 1) != 0)
        ppfd.dwFlags |= 1
    
    if ((arg2 & 2) != 0)
        ppfd.dwFlags |= 0x10
    
    if ((arg2 & 4) != 0)
        ppfd.dwFlags |= 2
    
    ppfd.iPixelType = 0
    ppfd.cColorBits = arg1
    ppfd.cDepthBits = 0x18
    ppfd.cStencilBits = arg7
    ppfd.cAccumBits = arg6
    ppfd.cAuxBuffers = arg5
    
    if (arg4 == 0)
        ppfd.iLayerType = 0
    else if (arg4 s<= 0)
        ppfd.iLayerType = 0xff
    else
        ppfd.iLayerType = 1
    
    if (sub_4530e0() == 0)
        sub_40c7bc()
        noreturn
    
    int32_t eax_7 = ChoosePixelFormat(arg3, &ppfd)
    
    if (eax_7 == 0)
        sub_40c7bc()
        noreturn
    
    if (SetPixelFormat(arg3, eax_7, &ppfd) == 0)
        sub_40c7bc()
        noreturn
    
    DescribePixelFormat(arg3, eax_7, 0x28, &ppfd)
    
    if ((ppfd.dwFlags.b & 0x80) != 0)
        sub_452db8(arg3, &ppfd)
    
    HGLRC result = wglCreateLayerContext(arg3, arg4)
    
    if (result != 0)
        *(sub_406c44() + 0x10) = 0
        return result
    
    sub_40c7bc()
    noreturn
}
