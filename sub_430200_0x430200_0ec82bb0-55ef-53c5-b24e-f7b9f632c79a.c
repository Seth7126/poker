// ============================================================
// 函数名称: sub_430200
// 虚拟地址: 0x430200
// WARP GUID: 0ec82bb0-55ef-53c5-b24e-f7b9f632c79a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: InflateRect, GetWindowRect
// [内部子函数调用]: sub_4318d0
// [被调用的父级函数]: 无
// ============================================================

BOOL __thiscallsub_430200(RECT* arg1, int32_t* arg2 @ eax, int32_t arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t var_c = *arg4
    int32_t var_c = *arg4
    int32_t var_8 = arg4[1]
    GetWindowRect(sub_4318d0(arg2), arg1)
    BOOL result = InflateRect(arg1, 0xa, 0xa)
    
    if (*(arg2 + 0x1aa) == 0)
        return result
    
    arg2[0x6b]
    return arg2[0x6a](arg3, &var_c, arg1)
}
