// ============================================================
// 函数名称: sub_49644c
// 虚拟地址: 0x49644c
// WARP GUID: ad56e36d-1957-5cb3-846e-eaf6c9694b54
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4960d8, sub_403828, sub_40b56c
// [被调用的父级函数]: sub_4975e8
// ============================================================

void __convention("regparm")sub_49644c(void* arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg2.b == *(arg1 + 0x58))
    if (arg2.b == *(arg1 + 0x58))
        return 
    
    if (*(arg1 + 8) != 0)
        arg2.b = 1
        sub_40b56c(0x4940dc, arg2, data_5305c0)
        sub_403828()
        noreturn
    
    char ecx_1 = arg2.b
    *(arg1 + 0x58) = ecx_1
    
    if (ecx_1 != 1)
        arg2.b = 0x33
        sub_4960d8(arg1, arg2)
    else
        arg2.b = 0
        sub_4960d8(arg1, arg2)
}
