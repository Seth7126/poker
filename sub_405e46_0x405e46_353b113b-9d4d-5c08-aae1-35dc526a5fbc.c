// ============================================================
// 函数名称: sub_405e46
// 虚拟地址: 0x405e46
// WARP GUID: 353b113b-9d4d-5c08-aae1-35dc526a5fbc
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4692db, sub_406ad4, sub_468ec0, sub_52452c, sub_52070c, sub_4b7714, sub_4ecdcc, sub_4e6028, sub_52c7c8, sub_4cbd28, sub_519804, sub_4692e4, sub_5205d0, sub_468eb7, sub_46abfc, sub_468af3, sub_468afc, sub_4dc090, sub_5197fb, sub_4b764c, sub_46f4fc, sub_52a8cc, sub_46f698, sub_46f000, sub_52a83c, sub_47be18, sub_524d14, sub_51d840, sub_46f458
// ============================================================

void* __convention("regparm")sub_405e46(int32_t* arg1, char* arg2)
{
    // 第一条实际指令: arg1[5] = &arg1[0x53]
    arg1[5] = &arg1[0x53]
    int16_t ecx = 0
    *arg1 = 0
    arg1[1] = 0xd7b0
    arg1[2] = 0x80
    arg1[3] = 0
    arg1[4] = 0
    arg1[6] = sub_405cb8
    arg1[7] = 0
    arg1[8] = 0
    arg1[9] = 0
    void* result = &arg1[0x12]
    
    if (arg2 != 0)
        ecx:1.b = 0x82
        char i
        
        do
            ecx.b = *arg2
            *result = ecx.b
            result += 1
            
            if (ecx.b == 0)
                return result
            
            ecx.b = arg2[1]
            arg2 = &arg2[2]
            *result = ecx.b
            result += 1
            
            if (ecx.b == 0)
                return result
            
            i = ecx:1.b
            ecx:1.b -= 1
        while (i != 1)
        result -= 1
    
    *result = ecx:1.b
    return result
}
