// ============================================================
// 函数名称: sub_453040
// 虚拟地址: 0x453040
// WARP GUID: 2f3b251c-62a4-5726-9712-04f084cfe4b2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetPixelFormat, wglMakeCurrent
// [内部子函数调用]: sub_4511d0, sub_406c44, sub_4512fc, sub_451ff4
// [被调用的父级函数]: sub_473938
// ============================================================

void* __convention("regparm")sub_453040(HDC arg1, HGLRC arg2)
{
    // 第一条实际指令: int32_t eax = GetPixelFormat(arg1)
    int32_t eax = GetPixelFormat(arg1)
    wglMakeCurrent(arg1, arg2)
    void* result = sub_406c44()
    
    if (eax != *(result + 0x10))
        sub_4511d0()
        sub_451ff4()
        sub_4512fc()
        result = sub_406c44()
        *(result + 0x10) = eax
    
    return result
}
