// ============================================================
// 函数名称: sub_42ee98
// 虚拟地址: 0x42ee98
// WARP GUID: 90e93daa-1270-565f-91a2-9887e9addb99
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SetFocus
// [内部子函数调用]: sub_4032ac, sub_42ee38, sub_42efd0
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_42ee98(int32_t* arg1)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    ebx.w = 0xffb9
    char eax_1 = sub_4032ac(arg1)
    sub_42ee38(arg1)
    int32_t* result = sub_42efd0(arg1)
    
    if (eax_1 != 0 && arg1[0x53] != 0)
        return SetFocus(arg1[0x53])
    
    return result
}
