// ============================================================
// 函数名称: sub_401548
// 虚拟地址: 0x401548
// WARP GUID: d771066a-7392-5317-a671-cd1a3219dab7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40148c, sub_4014bc
// [被调用的父级函数]: sub_401e1c, sub_401a34
// ============================================================

int32_t* __convention("regparm")sub_401548(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t* ebx = arg1
    int32_t* ebx = arg1
    int32_t* edi = ebx
    
    do
        int32_t esi_1 = *arg2
        int32_t* result = ebx[2]
        
        if (esi_1 u>= result && esi_1 + arg2[1] u<= result + ebx[3])
            if (esi_1 != result)
                int32_t esi_2 = arg2[1]
                void* edi_2 = result + ebx[3]
                
                if (*arg2 + esi_2 != edi_2)
                    int32_t ecx_6 = *arg2 + arg2[1]
                    int32_t var_18 = ecx_6
                    void* var_14 = edi_2 - ecx_6
                    ebx[3] = *arg2 - result
                    
                    if (sub_40148c(ebx, &var_18).b == 0)
                        return nullptr
                else
                    ebx[3] -= esi_2
            else
                ebx[2] += arg2[1]
                ebx[3] -= arg2[1]
                
                if (ebx[3] == 0)
                    sub_4014bc(ebx)
            
            result.b = 1
            return result
        
        ebx = *ebx
    while (edi != ebx)
    
    return nullptr
}
