// ============================================================
// 函数名称: sub_448590
// 虚拟地址: 0x448590
// WARP GUID: a6c8ab2c-9e44-5b59-aae0-7b09db4643bb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SetThreadLocale
// [内部子函数调用]: sub_40c310, sub_4498a0, sub_4476f4
// [被调用的父级函数]: sub_4480dd, sub_448668
// ============================================================

int32_t __convention("regparm")sub_448590(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: if (*arg2 == 0x1a)
    if (*arg2 == 0x1a)
        if (*(arg1 + 0x49) != 0)
            SetThreadLocale(0x400)
            sub_40c310()
        
        if (*(arg1 + 0x4a) != 0)
            sub_4476f4(data_5317dc)
            
            if (*(arg1 + 0x78) != 0)
                sub_4498a0(arg1, 0)
                sub_4498a0(arg1, 1)
    
    return 0
}
