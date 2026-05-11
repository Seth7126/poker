// ============================================================
// 函数名称: sub_409180
// 虚拟地址: 0x409180
// WARP GUID: f8c59c3a-25bb-500f-87b6-ac57aab3861b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40bdc4, sub_404078
// [被调用的父级函数]: sub_4b59d2, sub_4b44d0, sub_449678, sub_4b4488, sub_4b5a34
// ============================================================

void* __convention("regparm")sub_409180(void* arg1)
{
    // 第一条实际指令: int32_t eax_1 = sub_404078(arg1)
    int32_t eax_1 = sub_404078(arg1)
    
    if (eax_1 == 0)
        return nullptr
    
    void* result = arg1 + eax_1 - 1
    
    if (sub_40bdc4(arg1, eax_1) != 2)
        return result
    
    return result - 1
}
