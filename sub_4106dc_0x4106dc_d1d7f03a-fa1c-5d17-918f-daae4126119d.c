// ============================================================
// 函数名称: sub_4106dc
// 虚拟地址: 0x4106dc
// WARP GUID: d1d7f03a-fa1c-5d17-918f-daae4126119d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4104b0, sub_402784
// [被调用的父级函数]: sub_41054c, sub_49be1c, sub_410718, sub_4103fc
// ============================================================

void __convention("regparm")sub_4106dc(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg2 s< arg1[2] || arg2 s> 0x7ffffff)
    if (arg2 s< arg1[2] || arg2 s> 0x7ffffff)
        *arg1
        sub_4104b0(arg2, data_530554)
        noreturn
    
    if (arg2 != arg1[3])
        sub_402784(&arg1[1], arg2 << 2)
        arg1[3] = arg2
}
