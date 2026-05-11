// ============================================================
// 函数名称: sub_404a88
// 虚拟地址: 0x404a88
// WARP GUID: 5cba2739-cf6c-5d9e-871e-22204a04480a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404d30, sub_404524, sub_403e4c, sub_404a88, sub_40496c, sub_405b58, sub_4027e0, sub_40553c
// [被调用的父级函数]: sub_405348, sub_40496c, sub_404a88
// ============================================================

int32_t* __fastcallsub_404a88(char* arg1, void** arg2, int32_t* arg3 @ eax, int32_t arg4)
{
    // 第一条实际指令: int32_t* result_1 = arg3
    int32_t* result_1 = arg3
    void** esi = arg2
    char* edi = arg1
    int32_t i_7 = arg4
    arg1.b = *edi
    int32_t* result
    
    switch (arg1.b)
        case 0xa
            int32_t i_1
            
            do
                result = sub_403e4c(result_1, *esi)
                result_1 = &result_1[1]
                esi = &esi[1]
                i_1 = i_7
                i_7 -= 1
            while (i_1 != 1)
        case 0xb
            int32_t i_2
            
            do
                result = sub_404524(result_1, *esi)
                result_1 = &result_1[1]
                esi = &esi[1]
                i_2 = i_7
                i_7 -= 1
            while (i_2 != 1)
        case 0xc
            int32_t i_3
            
            do
                result = sub_404d30(result_1, esi)
                result_1 = &result_1[4]
                esi = &esi[4]
                i_3 = i_7
                i_7 -= 1
            while (i_3 != 1)
        case 0xd
            int32_t ecx
            ecx.b = edi[1]
            int32_t i_4
            
            do
                *(edi + ecx + 0xa)
                result = sub_404a88(*(edi + ecx + 6))
                result_1 += *(edi + ecx + 2)
                esi += *(edi + ecx + 2)
                i_4 = i_7
                i_7 -= 1
            while (i_4 != 1)
        case 0xe
            int32_t i_5
            
            do
                sub_40496c(result_1, esi, edi)
                result.b = edi[1]
                result_1 += *(edi + result + 2)
                esi += *(edi + result + 2)
                i_5 = i_7
                i_7 -= 1
            while (i_5 != 1)
        case 0xf
            int32_t i_6
            
            do
                result = sub_405b58(result_1, *esi)
                result_1 = &result_1[1]
                esi = &esi[1]
                i_6 = i_7
                i_7 -= 1
            while (i_6 != 1)
        default
            if (arg1.b != 0x11)
                arg3.b = 2
                noreturn sub_4027e0(arg3) __tailcall
            
            int32_t i
            
            do
                result = result_1
                sub_40553c(result, *esi, edi)
                result_1 = &result_1[1]
                esi = &esi[1]
                i = i_7
                i_7 -= 1
            while (i != 1)
    
    return result
}
