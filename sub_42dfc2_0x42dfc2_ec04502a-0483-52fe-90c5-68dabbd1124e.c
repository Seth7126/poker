// ============================================================
// 函数名称: sub_42dfc2
// 虚拟地址: 0x42dfc2
// WARP GUID: ec04502a-0483-52fe-90c5-68dabbd1124e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_42dcdc
// ============================================================

void**sub_42dfc2(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: void** result = *(arg1[-1] + 0x38)
    void** result = *(arg1[-1] + 0x38)
    
    if (result != arg1[-3] || *(arg1[-1] + 0x3c) != arg1[-4])
        int32_t edx_3
        edx_3.b = *(arg1 - 5)
        
        switch (edx_3)
            case 1
                result = *(arg1[2] - 4)
                result[1] -= arg1[-4] - *(arg1[-1] + 0x3c)
            case 2
                result = *(arg1[2] - 4)
                result[3] += arg1[-4] - *(arg1[-1] + 0x3c)
            case 3
                void* edx_9 = arg1[-3] - result
                result = *(arg1[2] - 4)
                *result -= edx_9
            case 4
                void* edx_11 = arg1[-3] - result
                result = *(arg1[2] - 4)
                result[2] += edx_11
            case 5
                void* eax_7 = *(arg1[2] - 4)
                *(eax_7 + 8) += arg1[-3] - result
                result = *(arg1[2] - 4)
                result[3] += arg1[-4] - *(arg1[-1] + 0x3c)
    
    *arg1
    return result
}
