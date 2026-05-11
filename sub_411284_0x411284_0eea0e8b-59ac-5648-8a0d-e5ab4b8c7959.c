// ============================================================
// 函数名称: sub_411284
// 虚拟地址: 0x411284
// WARP GUID: 0eea0e8b-59ac-5648-8a0d-e5ab4b8c7959
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_411284, sub_403248, sub_405b40
// [被调用的父级函数]: sub_41131c, sub_411284
// ============================================================

int32_t* __convention("regparm")sub_411284(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: if (arg2 != 0)
    if (arg2 != 0)
        *arg2 = 0
    
    int32_t* result = arg2
    sub_405b40(result)
    
    if (arg1 != 0)
        int32_t ebx
        ebx.w = 0xffff
        
        if (sub_4032ac(arg1) != 0)
            result = sub_403248(arg1, &data_40f80c)
            
            if (result.b == 0 || (arg1[8].b & 0x10) != 0)
                sub_405b40(arg2)
                return sub_411284()
        else
            result = sub_403248(arg1, &data_40f80c)
            
            if (result.b != 0 && (arg1[8].b & 0x10) != 0)
                sub_405b40(arg2)
                return (*(*arg1 + 0x28))(arg1, 0x41130c, arg2)
    
    return result
}
