// ============================================================
// 函数名称: sub_4b6a1c
// 虚拟地址: 0x4b6a1c
// WARP GUID: 78d27a4f-4099-5593-875e-db68bcd1823b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4b6a1c(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t result = arg3
    int32_t result = arg3
    
    if (*(arg1 + 0x20) == 0)
        return 0
    
    int32_t* eax = *(arg1 + 0x20)
    (*(*eax + 0x10))(eax, &result)
    return result
}
