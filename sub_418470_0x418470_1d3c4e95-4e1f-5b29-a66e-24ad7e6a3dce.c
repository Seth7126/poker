// ============================================================
// 函数名称: sub_418470
// 虚拟地址: 0x418470
// WARP GUID: 1d3c4e95-4e1f-5b29-a66e-24ad7e6a3dce
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: EnterCriticalSection
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_418d80, sub_4187b0, sub_419040, sub_418f78, sub_418cb0, sub_41889c
// ============================================================

void __convention("regparm")sub_418470(void* arg1)
{
    // 第一条实际指令: CRITICAL_SECTION* lpCriticalSection = *(arg1 + 0x14)
    CRITICAL_SECTION* lpCriticalSection = *(arg1 + 0x14)
    
    if (lpCriticalSection != 0)
        EnterCriticalSection(lpCriticalSection)
}
