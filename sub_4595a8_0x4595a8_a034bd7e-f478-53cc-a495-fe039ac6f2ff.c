// ============================================================
// 函数名称: sub_4595a8
// 虚拟地址: 0x4595a8
// WARP GUID: a034bd7e-f478-53cc-a495-fe039ac6f2ff
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_459a70
// ============================================================

int32_t __fastcallsub_4595a8(int32_t* arg1, int32_t* arg2, void* arg3 @ eax, int32_t arg4)
{
    // 第一条实际指令: int32_t* esi = *(*(arg3 + 0x1be) + 0x18)
    int32_t* esi = *(*(arg3 + 0x1be) + 0x18)
    char* edi = *esi
    char* edi_1 = esi[1]
    char* ebx_1 = esi[2]
    int32_t i_1 = *(arg3 + 0x6c)
    int32_t result_1 = 0
    int32_t* var_20 = arg1
    int32_t* var_1c = arg2
    int32_t result = 0
    
    if (0 s< arg4)
        do
            char* eax = *var_1c
            char* ecx = *var_20
            int32_t i = i_1
            
            while (i u> 0)
                int32_t edx_2
                edx_2.b = *eax
                i -= 1
                int32_t ebx_3
                ebx_3.b = eax[1]
                int32_t ebx_5
                ebx_5.b = eax[2]
                eax = &eax[3]
                *ecx = edi[edx_2] + edi_1[ebx_3] + ebx_1[ebx_5]
                ecx = &ecx[1]
            
            result_1 += 1
            var_20 = &var_20[1]
            var_1c = &var_1c[1]
            result = result_1
        while (result s< arg4)
    
    return result
}
