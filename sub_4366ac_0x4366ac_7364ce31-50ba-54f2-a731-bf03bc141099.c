// ============================================================
// 函数名称: sub_4366ac
// 虚拟地址: 0x4366ac
// WARP GUID: 7364ce31-50ba-54f2-a731-bf03bc141099
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_410524
// [被调用的父级函数]: 无
// ============================================================

void* __fastcallsub_4366ac(int32_t arg1, int32_t arg2, void* arg3 @ eax, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: void* result = *(arg3 + 0x24)
    void* result = *(arg3 + 0x24)
    int32_t ebx_1 = *(result + 8) - 1
    
    if (ebx_1 s>= 0)
        int32_t i_1 = ebx_1 + 1
        int32_t esi_1 = 0
        int32_t i
        
        do
            result = sub_410524(*(arg3 + 0x24), esi_1)
            
            if (*(result + 4) == arg2)
                result = arg4()
            
            esi_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return result
}
