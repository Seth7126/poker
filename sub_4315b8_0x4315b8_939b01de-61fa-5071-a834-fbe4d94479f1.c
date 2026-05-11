// ============================================================
// 函数名称: sub_4315b8
// 虚拟地址: 0x4315b8
// WARP GUID: 939b01de-61fa-5071-a834-fbe4d94479f1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SetWindowPos
// [内部子函数调用]: sub_4105a0, sub_410414, sub_4318d0, sub_410524, sub_410580
// [被调用的父级函数]: sub_431e68, sub_431690
// ============================================================

BOOL __convention("regparm")sub_4315b8(void* arg1, void* arg2)
{
    // 第一条实际指令: void* esi = arg2
    void* esi = arg2
    BOOL result = *(arg1 + 0x24)
    
    if (result != 0)
        void* edx = *(result + 0x134)
        
        if (edx != 0)
            esi -= *(edx + 8)
        
        result = sub_410580(*(result + 0x180), arg1)
        BOOL result_1 = result
        
        if (result_1 s>= 0)
            int32_t* edx_2 = *(*(arg1 + 0x24) + 0x180)
            result = edx_2[2]
            
            if (esi s< 0)
                esi = nullptr
            
            if (result s<= esi)
                esi = result - 1
            
            if (result_1 != esi)
                sub_410414(edx_2, result_1)
                result = sub_4105a0(*(*(arg1 + 0x24) + 0x180), esi, arg1)
        
        if (*(arg1 + 0x14c) != 0)
            if (esi == 0)
                return SetWindowPos(*(arg1 + 0x14c), 1, 0, 0, 0, 0, 0x3)
            
            int32_t* ebp_1 = *(*(arg1 + 0x24) + 0x180)
            result = ebp_1[2] - 1
            
            if (esi == result)
                return SetWindowPos(*(arg1 + 0x14c), nullptr, 0, 0, 0, 0, 0x3)
            
            HWND hWndInsertAfter
            
            if (result_1 s< esi)
                hWndInsertAfter = sub_4318d0(sub_410524(ebp_1, esi + 1))
                return SetWindowPos(*(arg1 + 0x14c), hWndInsertAfter, 0, 0, 0, 0, 0x3)
            
            if (result_1 s> esi)
                hWndInsertAfter = sub_4318d0(sub_410524(ebp_1, esi))
                return SetWindowPos(*(arg1 + 0x14c), hWndInsertAfter, 0, 0, 0, 0, 0x3)
    
    return result
}
