// ============================================================
// 函数名称: sub_49fd80
// 虚拟地址: 0x49fd80
// WARP GUID: 612d3ac4-941f-58eb-a635-b9e433865a50
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010, sub_404078
// [被调用的父级函数]: sub_4a06d0, sub_49fb84
// ============================================================

int32_t __fastcallsub_49fd80(char* arg1, void* arg2)
{
    // 第一条实际指令: int32_t i_2 = 0x7f
    int32_t i_2 = 0x7f
    char* edx = arg1
    int32_t i
    
    do
        *edx = 0xff
        edx = &edx[1]
        i = i_2
        i_2 -= 1
    while (i != 1)
    int32_t result = sub_404078(arg2)
    int32_t edx_1 = result
    
    if (edx_1 s> 0)
        result = 1
        int32_t i_1
        
        do
            int32_t ecx
            ecx.b = *(arg2 + result - 1)
            
            if (add_overflow(result, 0xffffffff))
                sub_403010()
                noreturn
            
            arg1[ecx - 1] = result.b - 1
            result += 1
            i_1 = edx_1
            edx_1 -= 1
        while (i_1 != 1)
    
    return result
}
