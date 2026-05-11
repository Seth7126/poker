// ============================================================
// 函数名称: sub_42b9cc
// 虚拟地址: 0x42b9cc
// WARP GUID: a96674b5-cb6c-5b36-bfcb-7aaf8a22062b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_4105a0, sub_42bba4, sub_410414, sub_440f08, sub_410580
// [被调用的父级函数]: sub_431e68, sub_42ba4c
// ============================================================

int32_t* __convention("regparm")sub_42b9cc(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t esi = arg2
    int32_t esi = arg2
    int32_t* result = arg1[9]
    
    if (result != 0)
        result = sub_410580(result[0x4d], arg1)
        
        if (result s>= 0)
            int32_t* edi_1 = *(arg1[9] + 0x134)
            int32_t edx_2 = edi_1[2]
            
            if (esi s< 0)
                esi = 0
            
            if (edx_2 s<= esi)
                esi = edx_2 - 1
            
            if (result != esi)
                sub_410414(edi_1, result)
                sub_4105a0(*(arg1[9] + 0x134), esi, arg1)
                sub_42bba4(arg1, *(arg1 + 0x47), 1)
                int32_t edx_7
                result, edx_7 = sub_440f08(arg1)
                
                if ((result[0x11].b & 4) != 0)
                    edx_7.b = 1
                    int32_t* ebx
                    ebx.w = 0xffd6
                    return sub_4032ac(result, edx_7)
    
    return result
}
