// ============================================================
// 函数名称: sub_4088f0
// 虚拟地址: 0x4088f0
// WARP GUID: 5164f8d1-8f5c-5fb0-844d-da4f425c250d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4043ac, sub_404078
// [被调用的父级函数]: sub_4807f4, sub_51d170, sub_4d8208, sub_4692db, sub_4e63cc, sub_49e0e8, sub_52c7c8, sub_4e6028, sub_43c480, sub_4ae168, sub_4692e4, sub_4980b4, sub_49de5c, sub_4981b4, sub_475d3c, sub_4ad27c, sub_49e1e0, sub_49f478
// ============================================================

int32_t __convention("regparm")sub_4088f0(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t i = sub_404078(arg1)
    int32_t i = sub_404078(arg1)
    char result = sub_4043ac(arg2, i)
    void* edx_1 = arg1
    char* esi_1 = *arg2
    
    for (; i != 0; i -= 1)
        result = *edx_1
        
        if (result u>= 0x61 && result u<= 0x7a)
            result -= 0x20
        
        *esi_1 = result
        edx_1 += 1
        esi_1 = &esi_1[1]
    
    return result
}
