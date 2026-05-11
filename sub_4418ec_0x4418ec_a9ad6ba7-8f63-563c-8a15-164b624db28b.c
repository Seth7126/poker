// ============================================================
// 函数名称: sub_4418ec
// 虚拟地址: 0x4418ec
// WARP GUID: a9ad6ba7-8f63-563c-8a15-164b624db28b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_420cec, sub_41842c, sub_4318d0
// [被调用的父级函数]: sub_4419f4
// ============================================================

int32_t __convention("regparm")sub_4418ec(int32_t arg1, void* arg2)
{
    // 第一条实际指令: sub_420cec(sub_4318d0(*(*(arg2 - 4) + 4)), *(zx.d(*(*(arg2 - 4) + 0x18)) * 0x14 + &data_52e9d0), *((zx.d(*(*(arg2 - 4) + 0x34)) << 2) + &data_52e9f8), sbb.d(arg1, arg1, arg1.b != 0))
    sub_420cec(sub_4318d0(*(*(arg2 - 4) + 4)), *(zx.d(*(*(arg2 - 4) + 0x18)) * 0x14 + &data_52e9d0), 
        *((zx.d(*(*(arg2 - 4) + 0x34)) << 2) + &data_52e9f8), sbb.d(arg1, arg1, arg1.b != 0))
    
    if (*(*(arg2 - 4) + 0x24) s> 0)
        sub_420cec(sub_4318d0(*(*(arg2 - 4) + 4)), 
            *(zx.d(*(*(arg2 - 4) + 0x18)) * 0x14 + &data_52e9d4), *(*(arg2 - 4) + 0x24), 0)
    
    if (*(*(arg2 - 4) + 0x38) s> 0)
        sub_420cec(sub_4318d0(*(*(arg2 - 4) + 4)), 
            *(zx.d(*(*(arg2 - 4) + 0x18)) * 0x14 + &data_52e9d8), *(*(arg2 - 4) + 0x38), 0)
    
    if (*(*(arg2 - 4) + 0x30) s> 0)
        sub_420cec(sub_4318d0(*(*(arg2 - 4) + 4)), 
            *(zx.d(*(*(arg2 - 4) + 0x18)) * 0x14 + &data_52e9dc), *(*(arg2 - 4) + 0x30), 0)
    
    int32_t eax_43 = sub_41842c(*(*(arg2 - 4) + 0x28))
    return sub_420cec(sub_4318d0(*(*(arg2 - 4) + 4)), 
        *(zx.d(*(*(arg2 - 4) + 0x18)) * 0x14 + &data_52e9e0), eax_43, 0)
}
