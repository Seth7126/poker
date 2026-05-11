// ============================================================
// 函数名称: sub_52d910
// 虚拟地址: 0x52d910
// WARP GUID: 060ff733-2848-502c-a308-9305e0040a14
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: sub_471144, sub_473938
// ============================================================

int32_t __fastcallsub_52d910(int32_t arg1, int32_t arg2, void* arg3 @ eax, int32_t arg4)
{
    // 第一条实际指令: int32_t edx = *(arg3 + 0x18)
    int32_t edx = *(arg3 + 0x18)
    
    if (edx u>= 0)
        int32_t i_1 = edx + 1
        int32_t result = 0
        int32_t i
        
        do
            int32_t ecx = result * 3
            bool c_1 = unimplemented  {imul ecx, esi, 0x3}
            
            if (c_1)
                sub_403010()
                noreturn
            
            if (*(*(arg3 + 0x14) + (ecx << 2)) == arg2 && *(*(arg3 + 0x14) + (ecx << 2) + 4) == arg1
                    && *(*(arg3 + 0x14) + (ecx << 2) + 8) == arg4)
                return result
            
            result += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return 0
}
