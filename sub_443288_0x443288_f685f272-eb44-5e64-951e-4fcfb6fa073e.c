// ============================================================
// 函数名称: sub_443288
// 虚拟地址: 0x443288
// WARP GUID: f685f272-eb44-5e64-951e-4fcfb6fa073e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42b644, sub_42ee38, sub_42efd0
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_443288(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t* result = arg1[9]
    int32_t* result = arg1[9]
    
    if (arg2 != result && arg1 != arg2)
        if (result == 0)
            sub_42ee38(arg1)
        
        result = sub_42b644(arg1, arg2)
        
        if (arg1[9] == 0)
            return sub_42efd0(arg1)
    
    return result
}
