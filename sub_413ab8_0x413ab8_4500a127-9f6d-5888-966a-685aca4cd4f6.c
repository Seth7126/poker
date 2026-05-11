// ============================================================
// 函数名称: sub_413ab8
// 虚拟地址: 0x413ab8
// WARP GUID: 4500a127-9f6d-5888-966a-685aca4cd4f6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40b56c, sub_403828
// [被调用的父级函数]: sub_413a6c
// ============================================================

int32_t __convention("regparm")sub_413ab8(void* arg1)
{
    // 第一条实际指令: *(arg1 + 8)
    *(arg1 + 8)
    *(arg1 + 0xc)
    int32_t eax_1
    int32_t edx_1
    eax_1, edx_1 = (*(**(arg1 + 4) + 4))()
    *(arg1 + 0x14) = eax_1
    
    if (eax_1 != 0)
        *(arg1 + 0x10) = 0
        return 0
    
    edx_1.b = 1
    sub_40b56c(sub_40e812+6, edx_1, data_5308f0)
    sub_403828()
    noreturn
}
