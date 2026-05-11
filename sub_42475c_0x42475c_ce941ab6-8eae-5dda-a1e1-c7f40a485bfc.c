// ============================================================
// 函数名称: sub_42475c
// 虚拟地址: 0x42475c
// WARP GUID: ce941ab6-8eae-5dda-a1e1-c7f40a485bfc
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetWindowLongA
// [内部子函数调用]: sub_4032ac, sub_431bcc, sub_4318d0
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_42475c(int32_t* arg1)
{
    // 第一条实际指令: (*(*arg1 - 0x10))()
    (*(*arg1 - 0x10))()
    
    if (sub_431bcc(arg1) != 0)
        char result = GetWindowLongA(sub_4318d0(arg1), 0xfffffff0)
        
        if ((result & 4) == 0)
            return result
    
    int32_t ebx
    ebx.w = 0xffb6
    return sub_4032ac(arg1)
}
