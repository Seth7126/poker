// ============================================================
// 函数名称: sub_445088
// 虚拟地址: 0x445088
// WARP GUID: cd8e41f3-06ec-58fa-aa26-c27312b99cc0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: BeginPaint, EndPaint, DrawIcon, IsIconic
// [内部子函数调用]: sub_42f900, sub_444f08, sub_4318d0
// [被调用的父级函数]: 无
// ============================================================

int16_t __convention("regparm")sub_445088(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: if (IsIconic(sub_4318d0(arg1)) != 0)
    if (IsIconic(sub_4318d0(arg1)) != 0)
        PAINTSTRUCT paint
        DrawIcon(BeginPaint(sub_4318d0(arg1), &paint), 0, 0, sub_444f08(arg1))
        return EndPaint(sub_4318d0(arg1), &paint)
    
    BOOL eax_2
    eax_2.w = 0x100
    eax_2.w = 0x100 | arg1[0x11].w
    arg1[0x11].w = eax_2.w
    sub_42f900(arg1, arg2)
    BOOL eax_4
    eax_4.w = 0x100
    int16_t result = (not.d(eax_4)).w & arg1[0x11].w
    arg1[0x11].w = result
    return result
}
