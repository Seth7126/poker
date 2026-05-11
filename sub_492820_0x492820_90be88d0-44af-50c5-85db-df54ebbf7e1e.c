// ============================================================
// 函数名称: sub_492820
// 虚拟地址: 0x492820
// WARP GUID: 90be88d0-44af-50c5-85db-df54ebbf7e1e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40b56c, sub_403828
// [被调用的父级函数]: sub_492f1c, sub_492c54, sub_493af4, sub_4931f4, sub_492d64, sub_493550, sub_493064, sub_49348c, sub_4933b0, sub_4939e0, sub_492e3c, sub_492fb0, sub_4935fc, sub_493a28
// ============================================================

void __convention("regparm")sub_492820(void* arg1)
{
    // 第一条实际指令: if (*(arg1 + 0x2c9) != 0)
    if (*(arg1 + 0x2c9) != 0)
        return 
    
    int32_t edx
    edx.b = 1
    sub_40b56c(0x491348, edx, data_530290)
    sub_403828()
    noreturn
}
