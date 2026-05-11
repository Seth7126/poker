// ============================================================
// 函数名称: sub_434144
// 虚拟地址: 0x434144
// WARP GUID: 86f89a08-81b3-540b-84c8-5c0cecf9ca8d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: PtInRect
// [内部子函数调用]: sub_40fa94, sub_42e838, sub_403248, sub_42e7fc
// [被调用的父级函数]: sub_4341d8
// ============================================================

int32_t* __convention("regparm")sub_434144(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t i = sub_42e838(*(*(arg2 - 8) + 0x14)) - 1
    int32_t i = sub_42e838(*(*(arg2 - 8) + 0x14)) - 1
    
    if (i s>= 0)
        do
            int32_t* result = sub_42e7fc(*(*(arg2 - 8) + 0x14), i)
            
            if (*(result + 0x47) != 0 && (sub_403248(result, 0x427f2c) == 0 || result[0x5a].b != 0))
                int32_t var_c
                sub_40fa94(*arg1 - result[0xc], arg1[1] - result[0xd], &var_c)
                int32_t var_8
                (*(*result + 0x40))(var_c, var_8)
                RECT lprc
                
                if (PtInRect(&lprc) != 0)
                    return result
            
            i -= 1
        while (i != 0xffffffff)
    
    return nullptr
}
