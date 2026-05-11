// ============================================================
// 函数名称: sub_4367cc
// 虚拟地址: 0x4367cc
// WARP GUID: 691bed76-574d-5018-8102-0f9547efd010
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4106bc
// [被调用的父级函数]: sub_436764, sub_4364f0, sub_4363d8, sub_4362e0
// ============================================================

int32_t __convention("regparm")sub_4367cc(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t result = sub_4106bc(*(arg1 + 0x24))
    int32_t result = sub_4106bc(*(arg1 + 0x24))
    
    if (result s>= 0)
        result = 0
        *(arg2 + 0x4c) = 0
    
    return result
}
