// ============================================================
// 函数名称: sub_43c26c
// 虚拟地址: 0x43c26c
// WARP GUID: 279b16db-ade2-5c56-aa92-20767c5d31ed
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4042c0, sub_40c024
// [被调用的父级函数]: sub_43c480
// ============================================================

int32_tsub_43c26c(void* arg1)
{
    // 第一条实际指令: int32_t eax
    int32_t eax
    void* eax_1 = sub_40c024(eax, *(arg1 - 4))
    int32_t result
    result.b = eax_1 != 0
    
    if (result.b != 0)
        sub_4042c0(arg1 - 4, eax_1, 1)
    
    return result
}
