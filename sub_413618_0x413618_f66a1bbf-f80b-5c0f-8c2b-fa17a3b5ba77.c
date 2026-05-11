// ============================================================
// 函数名称: sub_413618
// 虚拟地址: 0x413618
// WARP GUID: f66a1bbf-f80b-5c0f-8c2b-fa17a3b5ba77
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40e008, sub_413600
// [被调用的父级函数]: sub_41504c, sub_414aa0
// ============================================================

int32_tsub_413618()
{
    // 第一条实际指令: char* eax
    char* eax
    char* edx
    int32_t result = sub_40e008(eax, edx)
    
    if (result != 0xffffffff)
        return result
    
    sub_413600()
    noreturn
}
