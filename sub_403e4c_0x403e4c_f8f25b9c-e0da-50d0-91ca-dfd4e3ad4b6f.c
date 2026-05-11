// ============================================================
// 函数名称: sub_403e4c
// 虚拟地址: 0x403e4c
// WARP GUID: f8f25b9c-e0da-50d0-91ca-dfd4e3ad4b6f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403ebc, sub_402980, sub_40276c
// [被调用的父级函数]: sub_4a5f5c, sub_5127fc, sub_40b4ec, sub_4b0df4, sub_4a22af, sub_4d4f84, sub_5082d0, sub_49e7f3, sub_4b44d0, sub_412d78, sub_4acc64, sub_47a7ec, sub_49af78, sub_468970, sub_411168, sub_4a90cc, sub_439988, sub_43bf0c, sub_4ad614, sub_4af7a3, sub_49d4fc, sub_51d764, sub_42a90c, sub_47a8a3, sub_4afc93, sub_410070, sub_51038c, sub_4b0427, sub_4e649b, sub_40b5a8, sub_4dd1d7, sub_4335b8, sub_436aac, sub_4b0efc, sub_490090, sub_4ac6e8, sub_4a5f2c, sub_49c5c4, sub_4a95da, sub_4ed284, sub_4afc9c, sub_4a2d6f, sub_51a454, sub_414330, sub_499960, sub_469a14, sub_4f8b60, sub_4998ec, sub_47a86c, sub_4ad714, sub_4b5a34, sub_4aad8c, sub_4ad8c0, sub_507d3f, sub_4a2618, sub_46ea8b, sub_50f39c, sub_43c480, sub_497358, sub_4cb50c, sub_4ab224, sub_4804e4, sub_4ad707, sub_4acf9c, sub_4acc5b, sub_4a2b90, sub_4b008c, sub_49ebd4, sub_416308, sub_4a2ab4, sub_49cf70, sub_4a5ec0, sub_44cd2c, sub_49cfe0, sub_40496c, sub_4dad04, sub_4a256b, sub_412558, sub_4a3ee4, sub_40ad6c, sub_49bb03, sub_4b0914, sub_42a6b0, sub_4b0f24, sub_49d3ec, sub_4a22e0, sub_49f0a4, sub_49bd80, sub_4364c4, sub_436c1c, sub_49dcc4, sub_4b19b0, sub_4acba4, sub_408cec, sub_4b0b67, sub_51a68f, sub_5207dc, sub_43550c, sub_41613c, sub_4683f7, sub_4a6018, sub_42d8f4, sub_412670, sub_404a88, sub_42d2c0, sub_4cca24, sub_507e90, sub_4b8ae4, sub_4cda5c, sub_49722c, sub_48bd6c, sub_49f478, sub_51a79c, sub_512f3c, sub_4ad027, sub_49e7fc, sub_4126d8, sub_47d208, sub_413114, sub_404080, sub_4a5c03, sub_495150, sub_51974c, sub_4a2124, sub_511bec, sub_448f34, sub_48ee20, sub_414d38, sub_4b5b54, sub_4040c4, sub_43e1f8, sub_47a82c, sub_448eec, sub_49c664, sub_49cb30, sub_50d620, sub_4ad27c, sub_40b4b0, sub_40bfe4, sub_40aff4, sub_4ae408, sub_43b7cc, sub_447ca8, sub_41126c, sub_49d474, sub_51b4f0, sub_5101f8, sub_405038, sub_4af43c, sub_5193d0, sub_4ae3af, sub_52b63c, sub_4a3c90, sub_49aef8, sub_49d2b9, sub_404138, sub_40b63c, sub_40da04, sub_4986c7, sub_49e33c, sub_4b47c8, sub_4ecdcc, sub_428bd4, sub_4475f4, sub_449b74, sub_467070, sub_4c55c8, sub_49f548, sub_4a2310, sub_4a05ff, sub_49de5c, sub_49c840, sub_4a1a28, sub_51d270, sub_40acbc, sub_40e234, sub_4dd1e0, sub_4b0ddf, sub_4af7b0, sub_4d727c, sub_428b90, sub_4972ac, sub_4ad030, sub_4e5e3c, sub_49df54, sub_40c310, sub_4a1b34, sub_41b614, sub_4ad140, sub_41115f, sub_4aac84, sub_4b51e4, sub_51d840
// ============================================================

void __convention("regparm")sub_403e4c(char** arg1, char* arg2)
{
    // 第一条实际指令: if (arg2 != 0)
    if (arg2 != 0)
        if (*(arg2 - 8) s> 0xffffffff)
            *(arg2 - 8) += 1
        else
            char* eax_1 = sub_403ebc(*(arg2 - 4))
            sub_402980(arg2, eax_1, *(arg2 - 4))
            arg2 = eax_1
    
    char* temp0 = *arg1
    *arg1 = arg2
    
    if (temp0 == 0 || *(temp0 - 8) s< 1)
        return 
    
    int32_t temp3_1 = *(temp0 - 8)
    *(temp0 - 8) -= 1
    
    if (temp3_1 == 1)
        sub_40276c(&temp0[0xfffffff8])
}
