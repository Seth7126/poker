// ============================================================
// 函数名称: sub_402a90
// 虚拟地址: 0x402a90
// WARP GUID: ecab1b25-af21-5573-aaa4-7f523aa95c14
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_50f7b8
// ============================================================

void* __convention("regparm")sub_402a90(char* arg1, char* arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    ecx.b = *arg2
    void* edi_1 = &arg2[1]
    void* var_10 = edi_1
    int32_t edx
    edx.b = *arg1
    void* esi_1 = &arg1[1]
    
    if (edx - 1 s>= 0)
        arg1.b = *esi_1
        void* esi_2 = esi_1 + 1
        int32_t ecx_1 = ecx - (edx - 1)
        bool cond:1_1 = ecx != edx - 1
        bool cond:3_1 = ecx == edx - 1
        
        if (ecx s> edx - 1)
            while (true)
                if (ecx_1 != 0)
                    char temp2_1 = *edi_1
                    cond:1_1 = arg1.b != temp2_1
                    cond:3_1 = arg1.b == temp2_1
                    edi_1 += 1
                    ecx_1 -= 1
                    
                    if (arg1.b != temp2_1)
                        continue
                
                if (cond:1_1)
                    break
                
                void* var_14_1 = esi_2
                void* var_18_1 = edi_1
                int32_t i = edx - 1
                
                while (i != 0)
                    char temp3_1 = *esi_2
                    char temp4_1 = *edi_1
                    cond:1_1 = temp3_1 != temp4_1
                    cond:3_1 = temp3_1 == temp4_1
                    esi_2 += 1
                    edi_1 += 1
                    i -= 1
                    
                    if (temp3_1 != temp4_1)
                        break
                
                edi_1 = var_18_1
                esi_2 = var_14_1
                
                if (cond:3_1)
                    return edi_1 - var_10
    
    return nullptr
}
