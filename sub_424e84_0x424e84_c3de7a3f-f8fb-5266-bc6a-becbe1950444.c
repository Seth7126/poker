// ============================================================
// 函数名称: sub_424e84
// 虚拟地址: 0x424e84
// WARP GUID: c3de7a3f-f8fb-5266-bc6a-becbe1950444
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4306f4
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_424e84(void* arg1, char* arg2)
{
    // 第一条实际指令: int32_t result = sub_4306f4(arg1)
    int32_t result = sub_4306f4(arg1)
    
    if (*arg2 == 0xd && *(arg1 + 0x20f) == 0)
        *arg2 = 0
    
    return result
}
