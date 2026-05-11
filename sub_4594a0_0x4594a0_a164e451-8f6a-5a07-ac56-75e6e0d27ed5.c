// ============================================================
// 函数名称: sub_4594a0
// 虚拟地址: 0x4594a0
// WARP GUID: a164e451-8f6a-5a07-ac56-75e6e0d27ed5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_459400
// [被调用的父级函数]: sub_459a70
// ============================================================

int32_t* __convention("regparm")sub_4594a0(void* arg1)
{
    // 第一条实际指令: int32_t* result_2 = *(arg1 + 0x1be)
    int32_t* result_2 = *(arg1 + 0x1be)
    int32_t i = 0
    int32_t* result = result_2
    void* esi = &result[8]
    
    while (i s< *(arg1 + 0x74))
        int32_t edi_1 = *esi
        int32_t* result_1 = nullptr
        int32_t edx = 0
        result = &result_2[8]
        
        if (i s> 0)
            do
                if (edi_1 == *result)
                    result_1 = result[5]
                    break
                
                edx += 1
                result = &result[1]
            while (i s> edx)
        
        if (result_1 == 0)
            result = sub_459400(arg1, edi_1)
            result_1 = result
        
        *(esi + 0x14) = result_1
        i += 1
        esi += 4
    
    return result
}
