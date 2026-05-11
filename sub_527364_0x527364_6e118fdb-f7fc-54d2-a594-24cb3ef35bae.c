// ============================================================
// 函数名称: sub_527364
// 虚拟地址: 0x527364
// WARP GUID: 6e118fdb-f7fc-54d2-a594-24cb3ef35bae
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_516ec0, sub_516e74, sub_517ad4, sub_403010
// [被调用的父级函数]: sub_4d9a0c
// ============================================================

int32_t __fastcallsub_527364(int32_t arg1, int32_t arg2, int32_t arg3 @ eax, int32_t arg4)
{
    // 第一条实际指令: int32_t var_8 = arg1
    int32_t var_8 = arg1
    int32_t result = sx.d(*(arg3 + 0x1025e))
    
    if (arg2 == result)
        result = sx.d(*(arg3 + 0x10260))
        
        if (result == arg4)
            int32_t esi_1 = sx.d(*(*data_5301f4 + 0x1025e))
            int32_t ebx_1 = 1
            
            while (true)
                int32_t edi_1 = esi_1 * 0x2345
                bool o_4 = unimplemented  {imul edi, esi, 0x2345}
                
                if (o_4)
                    sub_403010()
                    noreturn
                
                if (ebx_1 s> *(data_5301b0 + (edi_1 << 2) - 0x39c))
                    *(arg3 + 0x1025e) = 0
                    *(arg3 + 0x10260) = 0
                    result = arg3
                    *(result + 0x10250) = 0
                    break
                
                bool o_1 = unimplemented  {imul edx, ebx, 0x35}
                
                if (o_1)
                    sub_403010()
                    noreturn
                
                if (*(data_5301b0 + (edi_1 << 2) + ebx_1 * 0xd4 - 0x8de8) == 0)
                    sub_516e74(data_5301b0 + (edi_1 << 2) - 0x8d14)
                    sub_517ad4(data_5301b0 + (edi_1 << 2) - 0x364, ebx_1)
                    sub_516ec0(data_5301b0 + (edi_1 << 2) - 0x8d14)
                    int32_t temp2_1 = ebx_1
                    ebx_1 -= 1
                    
                    if (add_overflow(temp2_1, 0xffffffff))
                        sub_403010()
                        noreturn
                
                int32_t temp1_1 = ebx_1
                ebx_1 += 1
                
                if (add_overflow(temp1_1, 1))
                    sub_403010()
                    noreturn
    
    return result
}
