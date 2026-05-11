// ============================================================
// 函数名称: sub_430e60
// 虚拟地址: 0x430e60
// WARP GUID: 69665ea7-b857-549b-9339-bd100735e33f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: EnableWindow
// [内部子函数调用]: sub_42e5f8, sub_431bcc
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_430e60(int32_t* arg1)
{
    // 第一条实际指令: if ((*(*arg1 + 0x4c))() == 0 && arg1[9] != 0)
    if ((*(*arg1 + 0x4c))() == 0 && arg1[9] != 0)
        sub_42e5f8(arg1, 0)
    
    char result = sub_431bcc(arg1)
    
    if (result == 0 || (arg1[8].b & 0x10) != 0)
        return result
    
    int32_t eax_5 = (*(*arg1 + 0x4c))()
    char temp0_1 = eax_5.b
    eax_5.b = neg.b(eax_5.b)
    return EnableWindow(arg1[0x53], sbb.d(eax_5, eax_5, temp0_1 != 0))
}
