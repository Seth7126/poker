// ============================================================
// 函数名称: sub_4093c8
// 虚拟地址: 0x4093c8
// WARP GUID: e8fe5407-69a2-573c-9aa4-168db065a07b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_43d100, sub_408bec
// ============================================================

int32_t __convention("regparm")sub_4093c8(int32_t arg1)
{
    // 第一条实际指令: int32_t edi = arg1
    int32_t edi = arg1
    int32_t i = 0xffffffff
    
    while (i != 0)
        bool cond:0_1 = 0 != *edi
        edi += 1
        i -= 1
        
        if (not(cond:0_1))
            break
    
    return edi - 1
}
