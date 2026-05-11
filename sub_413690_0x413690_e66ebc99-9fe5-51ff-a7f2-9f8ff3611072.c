// ============================================================
// 函数名称: sub_413690
// 虚拟地址: 0x413690
// WARP GUID: e66ebc99-9fe5-51ff-a7f2-9f8ff3611072
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4089dc, sub_403df8
// [被调用的父级函数]: 无
// ============================================================

void* __fastcallsub_413690(int32_t arg1, void* arg2, void* arg3 @ eax, int32_t arg4, int16_t arg5, int32_t arg6)
{
    // 第一条实际指令: void* result = sub_4089dc(arg2, *(arg3 + 0x70))
    void* result = sub_4089dc(arg2, *(arg3 + 0x70))
    
    if (result.b != 0 && arg5 != 0)
        arg4()
        result = arg3 + 0x70
        sub_403df8(result)
    
    return result
}
