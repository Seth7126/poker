// ============================================================
// 函数名称: sub_44675c
// 虚拟地址: 0x44675c
// WARP GUID: 4b8ac383-3692-569d-871a-8564fc94e782
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac
// [被调用的父级函数]: sub_44678c, sub_446808
// ============================================================

int32_t __convention("regparm")sub_44675c(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: if (arg1 != 0)
    if (arg1 != 0)
        int32_t ebx
        ebx.w = 0xfff4
        
        if (sub_4032ac(arg1, *(*(arg2 - 4) + 8)) != 0)
            return 1
    
    return 0
}
