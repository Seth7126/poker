// ============================================================
// 函数名称: sub_410618
// 虚拟地址: 0x410618
// WARP GUID: b5efb641-90b4-5c66-88ad-b92fcf86c56b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4105a0, sub_410524, sub_4104b0, sub_410414
// [被调用的父级函数]: sub_410e74
// ============================================================

void __convention("regparm")sub_410618(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: if (arg3 == arg2)
    if (arg3 == arg2)
        return 
    
    if (arg3 s< 0 || arg3 s>= arg1[2])
        *arg1
        sub_4104b0(arg3, data_5307e4)
        noreturn
    
    int32_t eax_2 = sub_410524(arg1, arg2)
    *(arg1[1] + (arg2 << 2)) = 0
    sub_410414(arg1, arg2)
    sub_4105a0(arg1, arg3, 0)
    arg1[1][arg3] = eax_2
}
