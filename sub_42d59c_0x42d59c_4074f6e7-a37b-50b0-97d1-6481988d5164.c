// ============================================================
// 函数名称: sub_42d59c
// 虚拟地址: 0x42d59c
// WARP GUID: 4074f6e7-a37b-50b0-97d1-6481988d5164
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42d560
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_42d59c(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_48 = *arg2
    int32_t var_48 = *arg2
    int32_t var_44 = arg2[1]
    int32_t result = 0
    int32_t esi_3 = *(arg1 + 0x38)
    int32_t edi_2 = *(arg1 + 0x3c)
    
    if (var_48 s<= 0)
        result.b = 3
    else if (esi_3 s> var_48)
        int32_t edx = var_44
        
        if (edx s<= 0)
            result.b = 1
        else if (edi_2 s> edx)
            double var_3c = fconvert.d(float.t(var_48))
            double var_34_1 = fconvert.d(float.t(esi_3 - var_48))
            double var_2c_1 = fconvert.d(float.t(edx))
            double var_24_1 = fconvert.d(float.t(edi_2 - edx))
            int32_t eax_2 = sub_42d560(&var_3c, 3)
            
            if (eax_2 u< 1)
                result.b = 3
            else if (eax_2 == 1)
                result.b = 4
            else if (eax_2 == 2)
                result.b = 1
            else if (eax_2 == 3)
                result.b = 2
        else
            result.b = 2
    else
        result.b = 4
    
    return result
}
