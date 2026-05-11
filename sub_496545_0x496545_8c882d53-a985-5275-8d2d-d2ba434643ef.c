// ============================================================
// 函数名称: sub_496545
// 虚拟地址: 0x496545
// WARP GUID: 8c882d53-a985-5275-8d2d-d2ba434643ef
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4950e0, sub_496698, sub_403430, sub_403420
// [被调用的父级函数]: 无
// ============================================================

int32_t __fastcallsub_496545(int32_t arg1, int32_t arg2, char* arg3 @ eax, int32_t arg4)
{
    // 第一条实际指令: *arg3 += arg3.b
    *arg3 += arg3.b
    void* entry_ebx
    *(entry_ebx + 0x56) += arg2.b
    sub_403430(arg3, arg2)
    int32_t ebx = arg2
    void* eax = *(arg3 + 0x58)
    
    if (eax != 0)
        ebx = sub_496698(eax)
    
    int32_t edx_1
    edx_1.b = ebx.b & 0xfc
    int32_t result = sub_4950e0(arg3, edx_1)
    
    if (ebx.b s<= 0)
        return result
    
    return sub_403420(arg3)
}
