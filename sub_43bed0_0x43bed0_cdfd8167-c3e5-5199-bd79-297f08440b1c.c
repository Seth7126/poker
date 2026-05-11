// ============================================================
// 函数名称: sub_43bed0
// 虚拟地址: 0x43bed0
// WARP GUID: cdfd8167-c3e5-5199-bd79-297f08440b1c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_43b5b8, sub_439b68, sub_43b53c, sub_43a0a4, sub_43b417
// ============================================================

int32_t __convention("regparm")sub_43bed0(void* arg1)
{
    // 第一条实际指令: while (true)
    while (true)
        void* edx_1 = *(arg1 + 0x58)
        
        if (edx_1 == 0)
            break
        
        arg1 = edx_1
    
    return *(arg1 + 0x64)
}
