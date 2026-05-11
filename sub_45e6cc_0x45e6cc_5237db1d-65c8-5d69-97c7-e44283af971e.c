// ============================================================
// 函数名称: sub_45e6cc
// 虚拟地址: 0x45e6cc
// WARP GUID: 5237db1d-65c8-5d69-97c7-e44283af971e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_45c964
// ============================================================

char* __fastcallsub_45e6cc(int16_t* arg1, void* arg2, void* arg3 @ eax, int32_t arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t edx_1
    int32_t edx_1
    edx_1.b = (*(arg3 + 0x136) + 0x80)[(sx.d(*arg1) * **(arg2 + 0x50) + 4) s>> 3 & 0x3ff]
    char* result = *arg5
    result[arg4] = edx_1.b
    return result
}
